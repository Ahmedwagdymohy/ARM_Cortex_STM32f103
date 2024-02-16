/********** < LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*********  < MCAL   */
#include "RCC_interface.h"
#include "GPIO_interface.h"

int main (void){
	/** < init the clk*/
	MCAL_RCC_initSysClock();
	/** < enable portA per*/
	MCAL_RCC_EnablePeriphral(RCC_APB2, RCC_APB2ENR_IOPAEN );
	
 /** < setPin0 Pin1 Pin2 in PortA  */
  GPIO_SetPinDirection (GPIO_PORTA, GPIO_PIN0, GPIO_PinDirectionOutput);
  GPIO_SetPinValue(GPIO_PORTA, GPIO_PIN0, GPIO_OUTPUT_PUSH_PULL_2MHz);
	

for(;;);
}
