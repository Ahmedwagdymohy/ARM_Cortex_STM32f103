#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H


void EXTI_voidInit(void);

void EXTI_voidEnableEXTI(u8 Copy_u8Line);
void EXTI_voidDisableEXTI(u8 Copy_u8Line);
void EXTI_voidSwTrigger(u8 Copy_u8Line);

#endif 