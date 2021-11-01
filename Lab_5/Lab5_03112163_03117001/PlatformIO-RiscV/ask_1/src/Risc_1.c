// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main ( void )
{
  int En_Value=0xFFFF, switches_value, high, low, sum;

  WRITE_GPIO(GPIO_INOUT, En_Value);

  while (1) { 
    switches_value = READ_GPIO(GPIO_SWs) >> 16;   // read value on switches and shift
    low = switches_value & 0xF;
    high = (switches_value & 0xF000) >> 12;
    sum = high + low;
    if (sum < 16) {
      WRITE_GPIO(GPIO_LEDs, sum);  // display switch value on LEDs
    }
    else {
      sum = 16;
      WRITE_GPIO(GPIO_LEDs, sum);  // display switch value on LEDs

    }

  }

  return(0);
}
