#include <16F628A.h>
#fuses XT, NOWDT, NOMCLR
#use delay(clock=4M)

#define led pin_b0

void main()
{
   set_tris_b(0x00);
   do {
      output_high(led);
      delay_ms(1000);
      output_low(led);
      delay_ms(1000);
   } 
   while(TRUE);
}
