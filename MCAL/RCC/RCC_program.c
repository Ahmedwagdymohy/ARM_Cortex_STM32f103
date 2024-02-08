/**
 * @file RCC_program.c
 * @author Ahmed Wagdy 
 * @brief 
 * @version 0.1
 * @date 2024-02-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */


/**************************** < LIB *************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/**************************** < MCAL ************************/
//the order of the include matters alot !
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"



/******************************************************************************************************************************************************/
/*******************************************          CODE         *********************************************************************************/

Std_ReturnType MCAL_RCC_initSysClock(){
    #if RCC_SYSCLK  == RCC_HSI
    /** <Enable_ HSE */

    SET_BIT(RCC_CR , 0);
    #endif  /* RCC_SYSCLK */
    #if RCC_SYSCLK  == RCC_HSE
    /** < Enable_HSE*/
    
    SET_BIT(RCC_CR , 16);


    #endif /**< RCC_SYSCLK*/
}

Std_ReturnType MCAL_RCC_EnablePeriphral(){

}

Std_ReturnType MCAL_RCC_DisablePeriphral(){
    
}

