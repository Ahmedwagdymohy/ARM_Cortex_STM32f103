/**
 * @file RCC_interface.h
 * @author Ahmed Wagdy
 * @brief MCAL_RCC
 * @version 0.1
 * @date 2024-02-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef RCC_interface_H_
#define RCC_interface_H_


/**
 * @brief defining the macros for the bus's in the STM
 * 
 */
#define RCC_AHB                    0  // AMBA High_performace Bus
#define RCC_APB1                   1  // advanced Perfromance Bus1
#define RCC_APB2                   2  // advanced Perfromance Bus2




/**
 * @defgroup RCC-AHBENR Bits definitions , to make the code readable
 *           Every macro --> Bit in the register
 */

#define RCC_AHBENR_DMA1EN          0
#define RCC_AHBENR_DMA2EN          1
#define RCC_AHBENR_SRAMEN          2
#define RCC_AHBENR_FLITFEN         4
#define RCC_AHBENR_CRCEN           6
#define RCC_AHBENR_OTGFSEN         12
#define RCC_AHBENR_ETHMACEN        14
#define RCC_AHBENR_ETHMACTXEN      15
#define RCC_AHBENR_ETHMACRXEN      16




/**
 * @brief RCC_APB2ENR Bits definitions , to make the code readable
 *         Every macro --> Bit in the register
 */
#define RCC_APB2ENR_AFIOEN          0
#define RCC_APB2ENR_IOPAEN          2
#define RCC_APB2ENR_IOPBEN          3
#define RCC_APB2ENR_IOPCEN          4
#define RCC_APB2ENR_IOPDEN          5
#define RCC_APB2ENR_IOPEEN          6
#define RCC_APB2ENR_ADC1EN          9
#define RCC_APB2ENR_ADC2EN          10
#define RCC_APB2ENR_TIM1EN          11
#define RCC_APB2ENR_SPI1EN          12
#define RCC_APB2ENR_USART1EN        14



 


/**
 * @brief RCC_APB1ENR Bits definitions , to make the code readable
 *         Every macro --> Bit in the register
 */

#define RCC_APB1ENR_TIM2EN          0
#define RCC_APB1ENR_TIM3EN          1
#define RCC_APB1ENR_TIM4EN          2
#define RCC_APB1ENR_TIM5EN          3
#define RCC_APB1ENR_TIM6EN          4
#define RCC_APB1ENR_TIM7EN          5
#define RCC_APB1ENR_WWDGEN          11
#define RCC_APB1ENR_SPI2EN          14
#define RCC_APB1ENR_SPI3EN          15
#define RCC_APB1ENR_USART2EN        17
#define RCC_APB1ENR_USART3EN        18
#define RCC_APB1ENR_UART4EN         19
#define RCC_APB1ENR_UART5EN         20
#define RCC_APB1ENR_I2C1EN          21
#define RCC_APB1ENR_I2C2EN          22
#define RCC_APB1ENR_CAN1EN          25
#define RCC_APB1ENR_CAN2EN          26
#define RCC_APB1ENR_BKPEN           27
#define RCC_APB1ENR_PWREN           28
#define RCC_APB1ENR_DACEN           22


















/**
 * @brief 1. Intializing the clock for the peripheral
 *        2. choosing the clk source for the system
 *        
 * @return Std_ReturnType 
 * 
 * @retval E_OK: If the functions works proberly
 *         E_NOT_OK : Error happened
 */
Std_ReturnType MCAL_RCC_initSysClock(void);






/**
 * @brief 1. enables the clock for the peripheral
 * 
 * @param Copy_PeripheralId 
 * @param Copy_PeripheralBus 
 * @return Std_ReturnType 
 * 
 * @retval E_OK: If the functions works proberly
 *         E_NOT_OK : 

 happened
 */
Std_ReturnType MCAL_RCC_EnablePeriphral(u8 Copy_PeripheralId , u8 Copy_PeripheralBus);







/**
 * @brief 1. enables the clock for the peripheral
 * 
 * @param Copy_PeripheralId 
 * @param Copy_PeripheralBus 
 * @return Std_ReturnType 
 * 
 * @retval E_OK: If the functions works proberly
 *         E_NOT_OK : Error happened
 */
Std_ReturnType MCAL_RCC_DisablePeriphral(u8 Copy_PeripheralId , u8 Copy_PeripheralBus);











#endif