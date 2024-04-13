/**
 * @file NVIC_program.c
 * @author AhmedWagdy
 * @brief 
 * @version 0.1
 * @date 2024-02-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */


/**************************** < LIB *************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/***************************  <MCAL***************************/
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"


/*******New role is about atomic access*********/
/** REG = 1<< BIT_NUM */


void MNVIC_voidEnableInterrupt(u8 Copy_u8InterNum) {
    if(Copy_u8InterNum > 0 && Copy_u8InterNum <31 ){
        SET_BIT(NVIC_ISER0 ,Copy_u8InterNum );
    }
}



