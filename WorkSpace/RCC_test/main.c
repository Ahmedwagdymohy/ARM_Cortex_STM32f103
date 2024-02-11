/*< LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"


/* < MCAL*/
#include "RCC_interface.h"


int main(void){
	
	MCAL_RCC_initSysClock();
	
	for(;;);
}
