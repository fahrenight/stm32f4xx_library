#include <stdint.h>

void GPIO_Config(void);

int main(void){

	GPIO_Config();
	while(1){

	}

}

void GPIO_Config(void){
	/*uint32_t *p; // pointerı tanımla
	p = (uint32_t*)0x40020000; // artık p nin gösterdiği yeri bir adres olarak tanımladık

	*p = 01001100; // işaret edilen adresin içine bir veriz yazdık

	uint32_t get_val;
	get_val=*p; //p adresinin gösterdiği değere ulaş*/

	uint32_t* pRCC_AHB1ENR = (uint32_t*)0x40023830;
	*pRCC_AHB1ENR |= (1u<<3); // GPIOD is activated

	//MODER register will be set as output mode
	uint32_t* pGPIO_MODER = (uint32_t*)0x40020C00;
	*pGPIO_MODER &= ~(1u<<31); //GPIO MODER 31.bit is 0
	*pGPIO_MODER |= (1u<<30); //GPIO MODER 30.bit is 1
	*pGPIO_MODER &= ~(1u<<27);
	*pGPIO_MODER |= (1u<<26);

	//15. pin is SET of ODR register
	uint32_t* pGPIO_ODR = (uint32_t*)0x40020C14; //GPIO ODR nin offset adresi
	*pGPIO_ODR |= (1u<<15);
	*pGPIO_ODR |= (1u<<13);
}



/* RCC_CR registerı offset adresi 0x00dır ve memory mapten bakıldığında
 * RCC_AHB1_ENR registerının 0x30 olduğunu görürüz. Burada yapılan şey ise
 * pRCC_AHB1_ENR isimli pointer değişkene bu registerın adresini attık.
 *
 *
 *
 *
 *
 *
 *
 * */
