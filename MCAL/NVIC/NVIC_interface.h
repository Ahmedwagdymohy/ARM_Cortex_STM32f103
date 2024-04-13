/**
 * @file NVIC_interfave.h
 * @author AhmedWagdy (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H



/**assaf code to be commented */
void MNVIC_voidEnableInterrupt      (u8 Copy_u8InterNum);
void MNVIC_voidDisableInterrupt     (u8 Copy_u8InterNum);
void MNVIC_voidSetpendingFlag       (u8 Copy_u8InterNum);
void MNCIV_voidClearPendingFlag     (u8 Copy_u8InterNum);
u8 MNVIC_u8ActiveBit                (u8 Copy_u8InterNum);













 Std_ReturnType MCAL_NVIC_SetPriority(u8 Copy_IRQn);

 Std_ReturnType MCAL_NVIC_ClearPriority(u8 Copy_IRQn);













#endif  /* NVIC_INTERFACE_H */
