#include "init.h"

int main(void){
       
    GPIO_Ini();
    while (1){

        if(READ_BIT(GPIOC_IDR, GPIOC_IDR_PIN13) != 0){
            SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_SET); // установка 1 в 7 бит ODR
        }
        else{
            SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_RESET); // установка 0 в 7 бит ODR
        }
    }
    
}