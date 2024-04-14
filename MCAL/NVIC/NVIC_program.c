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
    else if(Copy_u8InterNum >= 32 && Copy_u8InterNum <59){
        /*but if the interrupt number is bigger than 31 we will have to subctract 32 from it to put it into the ISER1*/
        Copy_u8InterNum -=32;
        SET_BIT(NVIC_ISER1, Copy_u8InterNum);
    } 
    /**We can do more num of interrupts but out stm32 doesn't support more than that*/
}




void MNVIC_voidDisableInterrupt(u8 Copy_u8InterNum){
    if(Copy_u8InterNum > 0 && Copy_u8InterNum <31 ){
        SET_BIT(NVIC_ICER0 ,Copy_u8InterNum );
    }
    else if(Copy_u8InterNum >= 32 && Copy_u8InterNum <59){
        /*but if the interrupt number is bigger than 31 we will have to subctract 32 from it to put it into the ISER1*/
        Copy_u8InterNum -=32;
        SET_BIT(NVIC_ICER1, Copy_u8InterNum);
    } 

}


void MNVIC_voidSetpendingFlag(u8 Copy_u8InterNum){
    if(Copy_u8InterNum > 0 && Copy_u8InterNum <31 ){
        SET_BIT(NVIC_ISPR0 ,Copy_u8InterNum );
    }
    else if(Copy_u8InterNum >= 32 && Copy_u8InterNum <59){
        /*but if the interrupt number is bigger than 31 we will have to subctract 32 from it to put it into the ISER1*/
        Copy_u8InterNum -=32;
        SET_BIT(NVIC_ISPR1, Copy_u8InterNum);
    } 

}



void MNCIV_voidClearPendingFlag(u8 Copy_u8InterNum){
    if(Copy_u8InterNum > 0 && Copy_u8InterNum <31 ){
        SET_BIT(NVIC_ICPR0 ,Copy_u8InterNum );
    }
    else if(Copy_u8InterNum >= 32 && Copy_u8InterNum <59){
        /*but if the interrupt number is bigger than 31 we will have to subctract 32 from it to put it into the ISER1*/
        Copy_u8InterNum -=32;
        SET_BIT(NVIC_ICPR1, Copy_u8InterNum);
    }

}



u8 MNVIC_u8ActiveBit(u8 Copy_u8InterNum){
    if(Copy_u8InterNum > 0 && Copy_u8InterNum <31 ){
        u8 local_bit = GET_BIT(NVIC_IABR0 ,Copy_u8InterNum );
        return local_bit;
    }
    else if(Copy_u8InterNum >= 32 && Copy_u8InterNum <59){
        /*but if the interrupt number is bigger than 31 we will have to subctract 32 from it to put it into the ISER1*/
        Copy_u8InterNum -=32;
        u8 local_bit =GET_BIT(NVIC_IABR1, Copy_u8InterNum);
        return local_bit;
    }
}




void MNVIC_voidSetpriority(s8 Copy_u8InterrupNum, u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority){

    


}

