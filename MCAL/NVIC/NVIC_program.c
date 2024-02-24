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


/**
 * @brief               Enables the Interrupt for the peripherals 
 * 
 * @param Copy_IRQn     takes the number of the peripheral we want to enable the interrupt for it 
 * @return Std_ReturnType 
 */
Std_ReturnType MCAL_NVIC_EnableIRQ(u8 Copy_IRQn ){
    Std_ReturnType LocalFunctionReturn = E_NOT_OK;
    if(Copy_IRQn>=0 & Copy_IRQn <=31){
        NVIC_ISER0 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;


    }else if(Copy_IRQn>=32 & Copy_IRQn <=63){
        NVIC_ISER1 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;

    }else if(Copy_IRQn>=64 & Copy_IRQn <=94){
        NVIC_ISER2 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;
    }else{LocalFunctionReturn = E_NOT_OK}


    return LocalFunctionReturn;


}



/**
 * @brief 
 * 
 * @param Copy_IRQn 
 * @return Std_ReturnType 
 */
Std_ReturnType MCAL_NVIC_DisableIRQ(u8 Copy_IRQn ){
    Std_ReturnType LocalFunctionReturn = E_NOT_OK;
    if(Copy_IRQn>=0 & Copy_IRQn <=31){
        NVIC_ICER0 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;


    }else if(Copy_IRQn>=32 & Copy_IRQn <=63){
        NVIC_ICER1 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;

    }else if(Copy_IRQn>=64 & Copy_IRQn <=94){
        NVIC_ICER2 = (1 << Copy_IRQn);
        LocalFunctionReturn = E_OK;
    }else{LocalFunctionReturn = E_NOT_OK}


    return LocalFunctionReturn;

}






Std_ReturnType MCAL_NVIC_SetPendingIRQ(u8 Copy_IRQn){


}
Std_ReturnType MCAL_NVIC_ClearPendingIRQ(u8 Copy_IRQn){


}
Std_ReturnType MCAL_NVIC_GetPendingIRQ(u8 Copy_IRQn){


}






 Std_ReturnType MCAL_NVIC_SetPriority(u8 Copy_IRQn){


 }

 Std_ReturnType MCAL_NVIC_ClearPriority(u8 Copy_IRQn){


 }





