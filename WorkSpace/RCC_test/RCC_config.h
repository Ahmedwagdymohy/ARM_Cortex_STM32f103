/**
 * @file RCC_config.h
 * @author Ahmed Wagdy 
 * @brief 
 * @version 0.1
 * @date 2024-02-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

//d***********
//file_guard
//************
#ifndef RCC_config_H_
#define RCC_config_H_ 






/**
 * @brief defining the sysClk type from the RCC_private.h file 
 *        we have three options {RCC_HSI - RCC_HSE - PLL} 
 *  options:  RCC_HSI                           0  
              RCC_HSE                           1  
              RCC_PLL                           2
 */


#define RCC_SYSCLK                              RCC_HSE


/**
 * @brief defining the external clks types of HSE
 *  options : RCC_RC_CLK 
 *            RCC_CRYSTAL_CLK
 */

#if RCC_SYSCLK == RCC_HSE       
/**< define the external types */       
    #define RCC_CLK_BYPASS                      RCC_RC_CLK
    



#endif/** < RCC_SYSCLK*/







#endif /* < RCC_config_H_*/