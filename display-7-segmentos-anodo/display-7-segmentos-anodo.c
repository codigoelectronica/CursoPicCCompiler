#include <16F628A.h>
#fuses XT, NOWDT, NOMCLR
#use delay(clock=4M)

BYTE CONST DISPLAY[10]= {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x18};
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
