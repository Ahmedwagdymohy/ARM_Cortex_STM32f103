#include "EXTI_private.h"
#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"



//intializing the EXTI
void EXTI_voidInit(void){

    #if EXTI_MODE == RISING
    SET_BIT(EXTI -> RTSR , EXTI_LINE);
    #elif EXTI_MODE == FALLING
    SET_BIT(EXTI -> FTSR , EXTI_LINE );
    //if both we will write on the two registers to be able to handle any of them
    #elif EXTI_MODE == ON_CHANGE 
    SET_BIT(EXTI -> RTSR , EXTI_LINE);
    SET_BIT(EXTI -> FTSR , EXTI_LINE );
    #else #error "you choosed wrong mode"
    #endif



    /*Disabling the EXTI when intializing the EXTI */
    CLR_BIT(EXTI ->IMR , Copy_u8Line);
}




void EXTI_voidEnableEXTI(u8 Copy_u8Line){
    //0 => masked => Disabled 
    //1 => notmasked => enabled

    SET_BIT(EXTI->IMR , Copy_u8Line); 
}


void EXTI_voidDisableEXTI(u8 Copy_u8Line){

    CLR_BIT(EXTI ->IMR , Copy_u8Line);

}


void EXTI_voidSwTrigger(u8 Copy_u8Line){

    SET_BIT(EXTI -> SWIER ,Copy_u8Line );
}


/**
 * This function is used to change the EXTI in the runTime
 */

void EXTI_voidSignalLatch(u8 copy_u8Line, u8 copy_u8Mode){
    switch (copy_u8Mode)
    {

    case RISING:
    SET_BIT(EXTI -> RTSR , EXTI_LINE); break;

    case FALLING:
    SET_BIT(EXTI -> FTSR , EXTI_LINE ); break;

    case ON_CHANGE:
    SET_BIT(EXTI -> RTSR , EXTI_LINE);
    SET_BIT(EXTI -> FTSR , EXTI_LINE );break;
    
    
    }


}
