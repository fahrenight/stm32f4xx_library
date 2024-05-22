#include <stdint.h>

void GPIOC_RegConfig(void);


int main(void)
{
	GPIOC_RegConfig();

	while(1){

	}
}


void GPIOC_RegConfig(void){
	/* 0x4002 3800 - 0x4002 3BFF - RCC Address
	 * Address offset: 0x30 - AHB1 Address Ofset
	 * 0x4002 0800 - 0x4002 0BFF GPIOC
	 * Address offset: 0x00 - GPIO_MODER*/

	uint32_t* pRCC_AHB1ENR = (uint32_t*)0x40023830;
	*pRCC_AHB1ENR |= (1u<<2); //GPIOC is activated

	// Define GPIO MODER, OTYPER, PUPDR and ODR registers
	uint32_t* pGPIOC_MODER = (uint32_t*)0x40020800; // Connect to GPIO_MODER register
	uint32_t* pGPIOC_OTYPER = (uint32_t*)0x40020804; // Address offset: 0x04
	uint32_t* pGPIOC_PUPDR = (uint32_t*)0x4002080C; //Address offset: 0x0C
	uint32_t* pGPIOC_ODR = (uint32_t*) 0x40020814; //Address offset: 0x14

	//Define GPIO PC10 as output
	*pGPIOC_MODER &= ~(1u<<21); // 01: General purpose output mode
	*pGPIOC_MODER |= (1u<<20); //01: General purpose output mode

	//Define GPIO PC10 as Push-Pull output type
	*pGPIOC_OTYPER &= ~(1u<<10);

	//Define GPIO PC10 as no pull-up & no pull-down
	*pGPIOC_PUPDR &= ~(1u<<21);
	*pGPIOC_PUPDR &= ~(1u<<20);

	// Turn on the LED
	*pGPIOC_ODR |= (1u<<10);
	*pGPIOC_ODR |= (1u<<11);


	/*
	//Turn on the LED with using GPIO_BSRR register
	uint32_t* pGPIOC_BSRR = (uint32_t*)0x40020818; //Address offset: 0x18
	*pGPIOC_BSRR |= (1u<<10); // PC set register is Activated
	*pGPIOC_BSRR &= ~(1u<<26); // inhibit to change the BSRR Reset function
	*/
}
