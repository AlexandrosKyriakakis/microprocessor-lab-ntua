# Askisi 1

Να γραφεί ένα πρόγραμμα σε C το οποίο εμφανίζει στα 4 λιγότερο σημαντικά LEDs το άθροισμα​ των 4 πιο και των 4 λιγότερο σημαντικών bits των διακοπτών. Εάν προκύψει υπερχείλιση, τότε το πέμπτο bit των LEDs να ανάβει.

```c
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

```

# Askisi 2

Να γραφεί ένα πρόγραμμα σε C το οποίο απεικονίζει επανειλημμένα στα LEDs​ (παρεμβάλλοντας αυθαίρετη καθυστέρηση​) την ​άρνηση τ​ης τιμής των 16 διακοπτών,
τόσες φορές όσοι άσσοι περιέχονται στην εν λόγω άρνηση. Για παράδειγμα, εάν οι διακόπτες έχουν την τιμή ​0101010101010101 τότε στα LEDs θα πρέπει να αναβοσβήσει 8 φορές η ένδειξη ​1010101010101010.​ Κατά την επανειλημμένη απεικόνιση της άρνησης, οποιαδήποτε νέα είσοδος στους διακόπτες αγνοείται. Μετά και την τελευταία απεικόνιση (στο παράδειγμά μας την όγδοη), τα LEDs να παραμένουν σβηστά ​μέχρι να αλλάξει τιμή ο πιο σημαντικός διακόπτης.​Μέχρι τότε, ο χρήστης μπορεί να μεταβάλλει τους υπόλοιπους διακόπτες ως επιθυμεί.

```c
// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400 
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }
int msb; 

int do_the_job (void){
  int number_of_ace = 0, switches_value;
  switches_value = READ_GPIO(GPIO_SWs);
  msb = switches_value & 0x8000;
  for (int i = 0; i < 16; i++){
    if ((switches_value >> i) & 0x1) { // an vreis asso
      WRITE_GPIO(GPIO_LEDs, switches_value ^ 0xffff); // grapse thn arnhsh sta led
      for(int j =0; j < 1000; j++) if (j > 998 ) number_of_ace++; // delay!!! we use number_of_ace just to avoid optimization
      WRITE_GPIO(GPIO_LEDs, 0x0);  // svise ta
      for(int j =0; j < 1000; j++) if (j > 998 ) number_of_ace++; // delay!!! we use number_of_ace just to avoid optimization
    }
  }
  return(number_of_ace/2); // Ayto to kanoume mono gia apofygh tou optimization apo ton compiler
}

int main ( void )
{
  int En_Value=0xFFFF;

  WRITE_GPIO(GPIO_INOUT, En_Value);

  do_the_job(); // arxikopoiei to msb
  while (1) { 
    if ((READ_GPIO(GPIO_SWs) & 0x8000) != msb) do_the_job(); // an allaksei to msb kane thn do the job.
  }

  return(0);
}


```