/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <gpio.h>

uint32_t time = 1680000;



int main(void){

	uint32_t* pRCC_AHB1ENR = (uint32_t*)0x40023830;
	*pRCC_AHB1ENR |= (1u<<3); // GPIOD is activated

	//MODER register will be set as output mode
	uint32_t* pGPIO_MODER = (uint32_t*)0x40020C00;
	*pGPIO_MODER &= ~(1u<<27); //GPIO MODER 31.bit is 0
	*pGPIO_MODER |= (1u<<26); //GPIO MODER 30.bit is 1
	*pGPIO_MODER &= ~(1u<<25);
	*pGPIO_MODER |= (1u<<24);
	*pGPIO_MODER &= ~(1u<<29);
	*pGPIO_MODER |= (1u<<28);
	*pGPIO_MODER &= ~(1u<<31);
	*pGPIO_MODER |= (1u<<30);

//	gpioWritePin(GPIOD, GPIO_PIN_13, SET);
//	gpioWritePort(GPIOD, PORT_SET);
//	gpioTogglePin(GPIOD, GPIO_PIN_12);


	while(1){
		gpioTogglePin(GPIOD, LED_GREEN);
		delay(time/10);
		if(gpioReadPin(GPIOD, LED_GREEN))
			gpioTogglePin(GPIOD, LED_RED);
		delay(time);
		gpioTogglePin(GPIOD, LED_ORANGE);
		delay(time);
		gpioTogglePin(GPIOD, LED_RED);
		delay(time);
		gpioTogglePin(GPIOD, LED_BLUE);
		delay(time);
	}
}





