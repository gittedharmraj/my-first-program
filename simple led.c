#include <reg51.H>
void delay(unsigned int y) {
    unsigned int i, j;
    for(i = 0; i < y; i++) {
        for(j = 0; j < 1275; j++);
 { }
    }
}

void main() {
    while(1) {
        delay(100);
         P1 = 0x00;   
        delay(100);
         P1 = 0xFF;   
    }
}