#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H




#define EXTI_BASE_ADDRESS 0x40010400


typedef struct{
    volatile u32 IMR;
    volatile u32 EMR;
    volatile u32 RTSR;
    volatile u32 FTSR;
    volatile u32 SWIER;
    volatile u32 PR;




}EXTI_t;

//defining a pointer to the EXTI_t struct 
#define EXTI ((volatile EXTI_t*)(EXTI_BASE_ADDRESS))




#endif