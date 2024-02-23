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





#define NULL                        0 


/****************************************     <INPUT modes           *****************************************************/
#define GPIO_INPUT_ANALOG_MODE                0b0000
#define GPIO_INPUT_FLOATING_MODE              0b0100
#define GPIO_INPUT_pull-down-up_MODE          0b1000




/****************************************     <OUTPUT modes  @10MHZ         *****************************************************/
#define GPIO_OUTPUT_PUSH_PULL_10MHz          0b0001
#define GPIO_OUTPUT_OPEN_DRAIN_10MHz         0b0101
#define GPIO_OUTPUT_AF_PUSH_PULL_10MHz       0b1001
#define GPIO_OUTPUT_AF_OPEN_DRAIN_10MHz      0b1101



/****************************************     <OUTPUT modes  @2MHZ         *****************************************************/
#define GPIO_OUTPUT_PUSH_PULL_2MHz          0x02
#define GPIO_OUTPUT_OPEN_DRAIN_2MHz         0b0110
#define GPIO_OUTPUT_AF_PUSH_PULL_2MHz       0b1010
#define GPIO_OUTPUT_AF_OPEN_DRAIN_2MHz      0b1110



/****************************************     <OUTPUT modes  @50MHZ         *****************************************************/
#define GPIO_OUTPUT_PUSH_PULL_50MHz          0b0011
#define GPIO_OUTPUT_OPEN_DRAIN_50MHz         0b0111
#define GPIO_OUTPUT_AF_PUSH_PULL_50MHz       0b1011
#define GPIO_OUTPUT_AF_OPEN_DRAIN_50MHz      0b1111










typedef unsigned char       u8;
typedef unsigned int        u32;
typedef u8                      Std_ReturnType;
#define E_OK                    (Std_ReturnType)1
#define E_NOT_OK                (Std_ReturnType)0



Std_ReturnType GPIO_SetPinDirection (u8 Copy_portId, u8 Copy_PinId, u8 Copy_PinDirection);
Std_ReturnType GPIO_GetPinValue(u8 Copy_portId , u8 Copy_PinId , u8 * Copy_PinValue );
Std_ReturnType GPIO_SetPinValue(u8 Copy_portId, u8 Copy_PinId, u8 Copy_PinValue);











#endif /**<GPIO_INTERFACE_H_ */
