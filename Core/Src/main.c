#include "stdint.h"

int main(void){
       
    *(uint32_t *)(0x40023800UL + 0x30UL) |= 0x06; // GPIOB, GPIOC clock enable
    *(uint32_t *)(0x40020400UL + 0x00UL) |= 0x4000; // PB7 mode - output

    *(uint32_t *)(0x40020400UL + 0x04UL) |= 0x00; // PB7 Push Pull mode

    *(uint32_t *)(0x40020400UL + 0x08UL) |= 0x4000; // PB7 OSPEEDR скорость средняя

    *(uint32_t *)(0x40020400UL + 0x0CUL) |= 0x00; // PB7 PU/PD off

    while (1){

        // *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x80; // установка 1 в 7 бит ODR
        
        if((*(uint32_t *)(0x40020800UL + 0x10UL) & 0x2000UL) != 0){
            *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x80; // установка 1 в 7 бит ODR
        }
        else{
            *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x800000; // установка 0 в 7 бит ODR
        }
    }
    
}