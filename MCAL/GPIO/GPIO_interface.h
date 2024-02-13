/**
 * @file GPIO_interface.h
 * @author Ahmed_Wagdy
 * @brief   Creating the function that the user gonna use
 * @version 0.1
 * @date 2024-02-11
 * 
 * @copyright WAGDY(c) 2024
 * 
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_



#define GPIO_PORTA                  0
#define GPIO_PORTB                  1
#define GPIO_PORTC                  2


#define GPIO_PinDirectionInput      0
#define GPIO_PinDirectionOutput     1





#define GPIO_PIN0                   0
#define GPIO_PIN1                   1 
#define GPIO_PIN2                   2 
#define GPIO_PIN3                   3 
#define GPIO_PIN4                   4 
#define GPIO_PIN5                   5 
#define GPIO_PIN6                   6 
#define GPIO_PIN7                   7 
#define GPIO_PIN8                   8 
#define GPIO_PIN9                   9 
#define GPIO_PIN10                  10
#define GPIO_PIN11                  11
#define GPIO_PIN12                  12
#define GPIO_PIN13                  13
#define GPIO_PIN14                  14
#define GPIO_PIN15                  15







Std_ReturnType GPIO_SetPinDirection (u8 Copy_portId, u8 Copy_PinId, u8 Copy_PinDirection);













#endif /**<GPIO_INTERFACE_H_ */