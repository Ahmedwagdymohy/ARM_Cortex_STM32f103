/**
 * @file NVIC_private.h
 * @author AhmedWagdy (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H


/** We have 3 ISR(set enable) and 3 ICER(clear-enable) and 3 ISPR(Set-pending) and 3 ICPR(clear-pending) and 3IABR(active-bit)*/


// 0xE000E100 is the base address of the NVIC in core registers table 
#define NVIC_BaseAdress         0xE000E100


/**
 * @defgroup this three defines is used to enable the interrupts , the difference between them that
 *           every one indicates for a number of intertupts ex: NVIC_ISER0 is for the interrupts 0->31
 *           and NVIC_ISER1 32-63 and so one  , bec we have 81 interrupts that's why we use many registers
 */
#define NVIC_ISER0              (*(volatile u32*)(0x000+NVIC_BaseAdress))  //interrupt SET/Enable registers from
#define NVIC_ISER1              (*(volatile u32*)(0x004+NVIC_BaseAdress))
#define NVIC_ISER2              (*(volatile u32*)(0x008+NVIC_BaseAdress))


/**         /**we enable the interrupts from ISER and disabling it from ICER
 *          /** writing zero in both registers will have no effect
 * 
 * @brief Clears the interrupts
 *        
 */

#define NVIC_ICER0              (*(volatile u32*)(0x080+NVIC_BaseAdress) ) //interrupt clear/enable registers
#define NVIC_ICER1              (*(volatile u32*)(0x084+NVIC_BaseAdress))
#define NVIC_ICER2              (*(volatile u32*)(0x088+NVIC_BaseAdress))

/**
 * @brief setting the pending registers
 * 
 */
#define NVIC_ISPR0              (*(volatile u32*)(0x100+NVIC_BaseAdress))  //interrupt set priority register
#define NVIC_ISPR1              (*(volatile u32*)(0x104+NVIC_BaseAdress))
#define NVIC_ISPR2              (*(volatile u32*)(0x108+NVIC_BaseAdress))

/**
 * @brief clearing the pending priority
 * 
 */
#define NVIC_ICPR0              (*(volatile u32*)(0x180+NVIC_BaseAdress))  //interrupt clear priority
#define NVIC_ICPR1              (*(volatile u32*)(0x184+NVIC_BaseAdress))
#define NVIC_ICPR2              (*(volatile u32*)(0x188+NVIC_BaseAdress))



/**
 * @brief active bit
 * 
 */
#define NVIC_IABR0              (*(volatile u32*)(0x200+NVIC_BaseAdress))
#define NVIC_IABR1              (*(volatile u32*)(0x204+NVIC_BaseAdress))
#define NVIC_IABR2              (*(volatile u32*)(0x208+NVIC_BaseAdress))






#endif  /* NVIC_PRIVATE_H */