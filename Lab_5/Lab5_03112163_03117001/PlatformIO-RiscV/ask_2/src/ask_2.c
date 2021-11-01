// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }
int msb;

int do_the_job (void){
  int number_of_ace = 0, switches_value;
  switches_value = READ_GPIO(GPIO_SWs) >> 16;
  msb = switches_value & 0x8000;
  for (int i = 0; i < 16; i++){
    if ((switches_value >> i) & 0x1) { // an vreis asso
      WRITE_GPIO(GPIO_LEDs, switches_value ^ 0xffff); // grapse thn arnhsh sta led
      for(int j =0; j < 1000; j++) if (j > 998 ) number_of_ace++; // delay just to avoid opt
      WRITE_GPIO(GPIO_LEDs, 0x0);  // svise ta
      for(int j =0; j < 1000; j++) if (j > 998 ) number_of_ace++; // delay just to avoid opt
    }
  }
  return(number_of_ace/2);
}

int main ( void )
{
  int En_Value=0xFFFF;

  WRITE_GPIO(GPIO_INOUT, En_Value);

  do_the_job();
  while (1) {
    if (((READ_GPIO(GPIO_SWs) >> 16) & 0x8000) != msb) do_the_job();
  }

  return(0);
}