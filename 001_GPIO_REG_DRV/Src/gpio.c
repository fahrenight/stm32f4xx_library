/*
 * gpio.c
 *
 *  Created on: Mar 9, 2024
 *      Author: M_Korkmaz
 */


#include "gpio.h"
#include "assert.h"

void gpioWritePin(GPIO_RegDef_t* pGPIOx, GPIO_PinNo_e pinNo, uint8_t val){
	if(val == 1) // 0000 0000 0000 0000
		pGPIOx->GPIO_ODR |= (1<<pinNo);
	else if (val==0)
		pGPIOx->GPIO_ODR &= ~(1<<pinNo);
}
void gpioWritePort(GPIO_RegDef_t* pGPIOx, uint16_t val){
	pGPIOx->GPIO_ODR = val;
}
void gpioTogglePin(GPIO_RegDef_t* pGPIOx,GPIO_PinNo_e pinNo){
	pGPIOx->GPIO_ODR ^= (1<<pinNo);
}
void delay(uint32_t time){
	while(time != 0)
		time--;
}
uint8_t gpioReadPin(const GPIO_RegDef_t* pGPIOx, uint8_t pinNo){
	uint8_t val = !(!(pGPIOx->GPIO_IDR & (1<<pinNo)));
	return val;
}
uint16_t gpioReadPort(const GPIO_RegDef_t* pGPIOx, uint8_t val){
	return (uint16_t)pGPIOx->GPIO_IDR;
}
