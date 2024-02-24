/**
 * @file BIT_MATH.h
 * @author Ahmed_wagdy
 * @brief 
 * @version 0.1
 * @date 2024-02-06
 * 
 * @copyright WAGDY(c) 2024
 * 
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_



/**
 * @brief creating the bit operations
 * 
 */
#define SET_BIT(REG,BIT_NO)     REG |=(1<< BIT_NO)
#define CLR_BIT(REG , BIT_NO)   REG &=~(1<<BIT_NO)
#define TOG_BIT(REG,BIT_NO)     REG ^=(1<<BIT_NO)
#define GET_BIT(REG ,BIT_NO)    ((REG & (1<<BIT_NO)) >> BIT_NO) // first we and the REG WITH THE bit we want then we shit the bit to be the least bit again


/*******New role is about atomic access*********/
/** REG = 1<< BIT_NUM */ // this will change the only specified bit without affecting the other bits 






#endif /*BIT_MATH_H_*/
