/**
 * @file GPIO_private.h
 * @author Ahmed_Wagdy
 * @brief   The hidden part from the user
 * @version 0.1
 * @date 2024-02-11
 * 
 * @copyright WAGDY(c) 2024
 * 
 */
#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_


 /**
  * @defgroup GPIO_ports base adresses
  * 
  */
#define GPIO_PORTA_BASE_ADDRESS         0x40010800U
#define GPIO_PORTB_BASE_ADDRESS         0x40010C00U
#define GPIO_PORTC_BASE_ADDRESS         0x40011000U
#define GPIO_PORTD_BASE_ADDRESS         0x40011400U
#define GPIO_PORTE_BASE_ADDRESS         0x40011800U
#define GPIO_PORTF_BASE_ADDRESS         0x40011C00U
#define GPIO_PORTG_BASE_ADDRESS         0x40012000U
 


//NOTE
//****
/* all the ports are controlled by the same registers , the difference between
    port and another is the base register of the port       */





/************************************<PortA>**************************************************************/
/** NOTE: all what changes is the base address for each port , while the registers are const
 * @defgroup  Registers for PORTA
 * 
 */

#define GPIO_GPIOA_CRL                  (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x00))  //Port configuration register low
#define GPIO_GPIOA_CRH                  (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x04))  //Port configuration register high                                                //port config register high
#define GPIO_GPIOA_IDR                  (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x08))
#define GPIO_GPIOA_ODR                  (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x0C))
#define GPIO_GPIOA_BSRR                 (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x10))
#define GPIO_GPIOA_BRR                  (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x14))
#define GPIO_GPIOA_LCKR                 (*( u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x18))



/************************************<PortB>**************************************************************/
/** NOTE: all what changes is the base address for each port , while the registers are const
 * @defgroup  Registers for PORTB
 * 
 */

#define GPIO_GPIOB_CRL                  (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x00))
#define GPIO_GPIOB_CRH                  (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x04))                                                 //port config register high
#define GPIO_GPIOB_IDR                  (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x08))
#define GPIO_GPIOB_ODR                  (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x0C))
#define GPIO_GPIOB_BSRR                 (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x10))
#define GPIO_GPIOB_BRR                  (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x14))
#define GPIO_GPIOB_LCKR                 (*( u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x18))


/************************************<PortC>**************************************************************/
/** NOTE: all what changes is the base address for each port , while the registers are const
 * @defgroup  Registers for portC
*/ 

#define GPIO_GPIOC_CRL                  (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x00))
#define GPIO_GPIOC_CRH                  (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x04))                                                 //port config register high
#define GPIO_GPIOC_IDR                  (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x08))
#define GPIO_GPIOC_ODR                  (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x0C))
#define GPIO_GPIOC_BSRR                 (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x10))
#define GPIO_GPIOC_BRR                  (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x14))
#define GPIO_GPIOC_LCKR                 (*( u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x18))


















#endif /**<GPIO_PRIVATE_H_ */