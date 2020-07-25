#include <16F628A.h>
#fuses XT, NOWDT, NOMCLR
#use delay(clock=4M)

BYTE CONST DISPLAY[10]= {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
#byte port_b = 0x06

void main()
{
   set_tris_b(0x00);
    
   while(TRUE) {
      for(int i = 0; i < 10; i++) {
         port_b = DISPLAY[i];
         delay_ms(1000);
      }
   }
}
