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

Std_ReturnType MCAL_RCC_initSysClock()
{
    //HSI
    #if RCC_SYSCLK  == RCC_HSI
        /** <Enable_ HSE */
        while(!GET_BIT(RCC_CR , RCC_CR_HSIRDY));        // make the prog wait till te HSIRDY is one and then continue the code
        SET_BIT(RCC_CR , RCC_CR_HSION);
        /* RCC_SYSCLK */
        /*switching the system clock to be HSI */
        /**
         * @fn           modifyBits
         * @brief        this function modifys multiple bits in the register
         * @arg          modifyBits(u32 *reg, u8 numBits, u8 bitPositions[], u8 values[])
         */
        u8 bit_positions []= {0,1};
        u8 Values[] = {0,1};
        modifyBits(&RCC_CFGR , 2 , bit_positions , Values);






    //HSE
    #elif RCC_SYSCLK  == RCC_HSE   //if the user chooses HSE he has two options inside it RC or CRYSTAL
        /** < Enable_HSE*/
        while(!GET_BIT(RCC_CR , RCC_CR_HSERDY));       // make the prog wait till te HSIRDY is one and then continue the code
        SET_BIT(RCC_CR , RCC_CR_HSEON);

        
        /**
         * @fn           modifyBits
         * @brief        this function modifys multiple bits in the register
         * @arg          modifyBits(u32 *reg, u8 numBits, u8 bitPositions[], u8 values[])
         */

        u8 bit_positions []= {0,1};
        u8 Values[] = {0,1};
        modifyBits(&RCC_CFGR , 2 , bit_positions , Values);

    //types of HSE RCC_RC_CLK , RCC_CRYSTAL_CLK
    #if RCC_CLK_BYPASS == RCC_RC_CLK
        SET_BIT(RCC_CR ,RCC_CR_HSEBYP);
    #elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK
        CLR_BIT(RCC_CR, RCC_CR_HSEBYP);
    #else //Error
        #error "Wrong choise for the type of th external clk"
    #endif /** < RCC_CLK_BYPASS*/







    //PLL7
    #elif RCC_SYSCLK == RCC_PLL

        while(!GET_BIT(RCC_CR, RCC_CR_PLLRDY));
        SET_BIT(RCC_CR, RCC_CR_PLLON );

        /**
         * @fn           modifyBits
         * @brief        this function modifys multiple bits in the register
         * @arg          modifyBits(u32 *reg, u8 numBits, u8 bitPositions[], u8 values[])
         */
        u8 bit_positions []= {0,1};
        u8 Values[] = {0,1};
        modifyBits(&RCC_CFGR , 2 , bit_positions , Values);

    #else
        #error "Wrong choice for the SYSCLK"
    #endif /**< RCC_SYSCLK*/
}



Std_ReturnType MCAL_RCC_EnablePeriphral(){

}

Std_ReturnType MCAL_RCC_DisablePeriphral(){
    
}

