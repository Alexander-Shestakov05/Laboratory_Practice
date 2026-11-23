#include "init.h"


void GPIO_Ini(void){

    RCC_GPIO_EN |= RCC_GPIOB_EN + RCC_GPIOC_EN; // GPIOB, GPIOC clock enable
    GPIOB_MODER |= GPIOB_MODE_PIN7_OUT; // PB7 mode - output

    GPIOB_OSPEEDR |= GPIOB_OTYPE_PIN7_PP; // PB7 Push Pull mode

    GPIOB_OSPEEDR |= GPIOB_OSPEED_PIN7_MID; // PB7 OSPEEDR скорость средняя

    GPIO_PUPDR |= GPIOB_PUPDR_PIN7_NOPUPD; // PB7 PU/PD off
}