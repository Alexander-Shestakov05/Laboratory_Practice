#include "stdint.h"

int main(void){
    
    
    *(uint32_t *)(0x040023800UL + 0x30UL) |= 0x02UL; // GPIOB clocl enable
}