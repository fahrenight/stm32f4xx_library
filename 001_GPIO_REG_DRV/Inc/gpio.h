/*
 * gpio.h
 *
 *  Created on: Mar 9, 2024
 *      Author: M_Korkmaz
 */

/*gpio_init();
 * gpio_write_pin();
 * gpıo_write_port();
 * gpio_toogle()
 * gpio_read_pin()*/

#ifndef GPIO_H_
#define GPIO_H_

#include <stm32f4xx.h>




	//GPIO Write Pin
	void gpioWritePin(GPIO_RegDef_t* pGPIOx, GPIO_PinNo_e pinNo, uint8_t val); // Which port, which pin, val(0,1)
	void gpioWritePort(GPIO_RegDef_t* pGPIOx, uint16_t val);
	void gpioTogglePin(GPIO_RegDef_t* pGPIOx,GPIO_PinNo_e pinNo);
	uint8_t gpioReadPin(const GPIO_RegDef_t* pGPIOx, uint8_t pinNo);
	uint16_t gpioReadPort(const GPIO_RegDef_t* pGPIOx, uint8_t val); //GPIOA_0, GPIOA_1........GPIOA_15

	void gpioModeSelect(GPIO_RegDef_t* pGPIOx, GPIO_PinNo_e pinNo, GPIO_PinMode_e pinMode);
	void delay(uint32_t time);


















// TOGGLE_PORT FONKSİYONU ODEV


#endif /* GPIO_H_ */
