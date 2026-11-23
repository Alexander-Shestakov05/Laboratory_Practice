#include "init.h"

int main(void){
       
    GPIO_Ini();
    while (1){

        if(READ_GPIO_C13 != 0){
            SET_GPIO_B7; // установка 1 в 7 бит ODR
        }
        else{
            RESET_GPIO_B7; // установка 0 в 7 бит ODR
        }
    }
    
}