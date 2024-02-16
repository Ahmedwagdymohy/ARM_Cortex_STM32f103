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
    Std_ReturnType Local_functionStatus = E_NOT_OK;

    //HSI
    #if RCC_SYSCLK  == RCC_HSI
        /** <Enable_ HSE */
        while(!GET_BIT(RCC_CR , RCC_CR_HSIRDY));        // make the prog wait till te HSIRDY is one and then continue the code
        SET_BIT(RCC_CR , RCC_CR_HSION);
        /* RCC_SYSCLK */
        /*switching the system clock to be HSI */ // function created using GPT
        /**
         * @fn           modifyBits
         * @brief        this function modifys multiple bits in the register
         * @arg          modifyBits(u32 *reg, u8 numBits, u8 bitPositions[], u8 values[])
         */
        u8 bit_positions []= {0,1};
        u8 Values[] = {0,1};
        modifyBits(&RCC_CFGR , 2 , bit_positions , Values);
        Local_functionStatus = E_OK;





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
        Local_functionStatus = E_OK;

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
        Local_functionStatus = E_OK;

    #else
        #error "Wrong choice for the SYSCLK"

    #endif /**< RCC_SYSCLK*/
    return Local_functionStatus;
}












/**
 * @brief this fuction enable the clk for the periphrals but we should know the the BUS name
 *        we should know the bus name of the peripheral from the memory map section in the datasheet
 * @arg    takes the    Copy_PeripheralId: bit that represnts the peripherral in the register
 *          and the     Copy_PeripheralBus: the bus that responsible for that peripheral
 * @return Std_ReturnType 
 */
Std_ReturnType MCAL_RCC_EnablePeriphral( u8 Copy_PeripheralId , u8 Copy_PeripheralBus){

    Std_ReturnType Local_function_status = E_NOT_OK;
    switch (Copy_PeripheralBus)
    {
    case RCC_AHB:
        SET_BIT(RCC_AHBENR,Copy_PeripheralId) ;
        Local_function_status = E_OK;
    break;

    case RCC_APB1:
        SET_BIT(RCC_APB1ENR, Copy_PeripheralId);
        Local_function_status = E_OK;

    break;



    case RCC_APB2:
        SET_BIT(RCC_APB2ENR , Copy_PeripheralId);
        Local_function_status = E_OK;

    break;



    default: Local_function_status = E_NOT_OK;
    break;
    }



    return Local_function_status;
}











/**
 * @brief Disables the Clock for the peripheral , knowing the Peripheral bit and the peripheral bus
 * 
 * @param Copy_PeripheralId 
 * @param Copy_PeripheralBus 
 * @return Std_ReturnType 
 */
Std_ReturnType MCAL_RCC_DisablePeriphral(u8 Copy_PeripheralId , u8 Copy_PeripheralBus){

    Std_ReturnType Local_function_status = E_NOT_OK;
    switch (Copy_PeripheralBus)
    {
    case RCC_AHB:
        CLR_BIT(RCC_AHBENR,Copy_PeripheralId) ;
        Local_function_status = E_OK;
    break;

    case RCC_APB1:
        CLR_BIT(RCC_APB1ENR,Copy_PeripheralId) ;
        Local_function_status = E_OK;

    break;



    case RCC_APB2:
        CLR_BIT(RCC_APB2ENR,Copy_PeripheralId) ;
        Local_function_status = E_OK;

    break;



    default: Local_function_status = E_NOT_OK;
    break;
    }



    return Local_function_status;

    
}



void modifyBits(u32 *reg, u8 numBits, u8 bitPositions[], u8 values[]) {
    u32 bitmask = 0;
		u8 i =0;

    // Create the bitmask by setting the specified bits
    for ( i = 0; i < numBits; i++) {
        bitmask |= (1 << bitPositions[i]);
    }

    // Modify the specified bits based on the values
    for (i = 0; i < numBits; i++) {
        if (values[i]) {
            // Set the bit if the corresponding value is 1
            *reg |= (1 << bitPositions[i]);
        } else {
            // Clear the bit if the corresponding value is 0
            *reg &= ~(1 << bitPositions[i]);
        }
    }
}

