#include <stdint.h>

int main(void){
    *(uint32_t*)(0x40023800UL + 0x30UL) |= 0x02; // 2; 0b10;


    while(1){}
}

