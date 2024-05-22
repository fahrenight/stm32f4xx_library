/*
 * stm32f4xx.h
 *
 *  Created on: Mar 9, 2024
 *      Author: M_Korkmaz
 */

#ifndef STM32F4XX_H_
#define STM32F4XX_H_
#include <stdint.h>



// Define bus addresses
#define APB1_BASEADDR		0x40000000
#define APB2_BASEADDR		0x40010000
#define AHB1_BASEADDR		0x40020000
#define AHB2_BASEADDR		0x50050000
#define AHB3_BASEADDR		0x60000000

// Define perpherals adresses for APB1 bus BASEADDR
#define TIM2_BASEADDR		APB1_BASEADDR
#define TIM3_BASEADDR		(APB1_BASEADDR + 0x400) // Base addr + Referecence adress
#define TIM4_BASEADDR		(APB1_BASEADDR + 0x800)
#define TIM5_BASEADDR		(APB1_BASEADDR + 0xC00)
#define TIM6_BASEADDR		(APB1_BASEADDR + 0x1000)
#define TIM7_BASEADDR		(APB1_BASEADDR + 0x1400)
#define TIM12_BASEADDR		(APB1_BASEADDR + 0x1800)
#define TIM13_BASEADDR		(APB1_BASEADDR + 0x1C00)
#define TIM14_BASEADDR		(APB1_BASEADDR + 0x2000)
//Reserved Address is here
#define RTC_BKP_BASEADDR	(APB1_BASEADDR + 0x2800)
#define WWDG_BASEADDR		(APB1_BASEADDR + 0x2C00)
#define IWDG_BASEADRR		(APB1_BASEADDR + 0x3000)
#define I2S2EXT_BASEADDR	(APB1_BASEADDR + 0x3400)
#define SPI2_I2S2_BASEADDR	(APB1_BASEADDR + 0x3800)
#define SPI3_I2S3_BASEADDR	(APB1_BASEADDR + 0x3C00)
#define I2S3EXT_BASEADDR	(APB1_BASEADDR + 0x4000)
#define USART2_BASEADDR		(APB1_BASEADDR + 0x4400)
#define USART3_BASEADDR		(APB1_BASEADDR + 0x4800)
#define USART4_BASEADDR		(APB1_BASEADDR + 0x4C00)
#define USART5_BASEADDR		(APB1_BASEADDR + 0x5000)
#define I2C1_BASEADDR		(APB1_BASEADDR + 0x5400)
#define I2C2_BASEADDR		(APB1_BASEADDR + 0x5800)
#define I2C3_BASEADDR		(APB1_BASEADDR + 0x5C00)
//Reserved Address is here
#define CAN1_BASEADDR		(APB1_BASEADDR + 0x6400)
#define CAN2_BASEADDR		(APB1_BASEADDR + 0x6800)
//Reserved Address is here
#define PWR_BASEADDR		(APB1_BASEADDR + 0x7000)
#define DAC_BASEADDR		(APB1_BASEADDR + 0x7400)


// Define perpherals adresses for APB2 bus BASEADDR
#define TIM1_BASEADDR		APB2_BASEADDR
#define TIM8_BASEADDR		(APB2_BASEADDR + 0x400)
//Reserved Address is here
#define USART1_BASEADDR		(APB2_BASEADDR + 0x1000)
#define USART6_BASEADDR		(APB2_BASEADDR + 0x1400)
//Reserved Address is here
#define ADC1_2_3_BASEADDR (APB2_BASEADDR + 0x2000)
//Reserved Address is here
#define SDIO_BASEADDR		(APB2_BASEADDR + 0x2C00)
#define SPI1_BASEADDR		(APB2_BASEADDR + 0x3000)
//Reserved Address is here
#define SYSCFG_BASEADDR		(APB2_BASEADDR + 0x3800)
#define EXTI_BASEADDR		(APB2_BASEADDR + 0x3C00)
#define TIM9_BASEADDR		(APB2_BASEADDR + 0x4000)
#define TIM10_BASEADDR		(APB2_BASEADDR + 0x4400)
#define TIM11_BASEADDR		(APB2_BASEADDR + 0x4800)


// Define perpherals adresses for AHB1 bus BASEADDR
#define GPIOA_BASEADDR		(AHB1_BASEADDR)
#define GPIOB_BASEADDR		(AHB1_BASEADDR + 0x400)
#define GPIOC_BASEADDR		(AHB1_BASEADDR + 0x800)
#define GPIOD_BASEADDR		(AHB1_BASEADDR + 0xC00)
#define GPIOE_BASEADDR		(AHB1_BASEADDR + 0x1000)
#define GPIOF_BASEADDR		(AHB1_BASEADDR + 0x1400)
#define GPIOG_BASEADDR		(AHB1_BASEADDR + 0x1800)
#define GPIOH_BASEADDR		(AHB1_BASEADDR + 0x1C00)
#define GPIOI_BASEADDR		(AHB1_BASEADDR + 0x2000)
//Reserved Address is here
#define CRC_BASEADDR		(AHB1_BASEADDR + 0x3000)
//Reserved Address is here
#define RCC_BASEADDR		(AHB1_BASEADDR + 0x3800)
#define FLASH_INTERFACE_BASEADDR (AHB1_BASEADDR + 0x3C00)
#define BKPSRAM_BASEADDR	(AHB1_BASEADDR + 0x4000)
//Reserved Address is here
#define DMA1_BASEADDR		(AHB1_BASEADDR + 0x6000)
#define DMA2_BASEADDR		(AHB1_BASEADDR + 0x6400)
//Reserved Address is here
#define ETHERNET_MAC_BASEADDR (AHB1_BASEADDR 0x8000)
//Reserved Address is here
#define USB_OTG_HS_BASEADDR	(AHB1_BASEADDR 0x40000)
//Reserved Address is here
#define USB_OTF_FS_BASEADDR	(0x50000000) // USB OTG FS Direct Address


// Define perpherals adresses for AHB2 bus BASEADDR
#define DCMI_BASEADDR		AHB2_BASEADDR
//Reserved Address is here
#define RNG_BASEADDR		(AHB2_BASEADDR + 0x10800)


// Define perpherals adresses for AHB3 bus BASEADDR
#define FSMC_BANK1_BASEADDR	AHB3_BASEADDR
#define FSMC_BANK2_BASEADDR	(AHB3_BASEADDR + 0x10000000)
#define FSMC_BANK3_BASEADDR	(AHB3_BASEADDR + 0x20000000)
#define FSMC_BANK4_BASEADDR	(AHB3_BASEADDR + 0x30000000)
#define FSMC_CR_REGISTER_BASEADDR (AHB3_BASEADDR + 0x40000000)

/*In this part of the code we define a new variable type called GPIO_RegDef_t.
 * We use GPIO_RegDef_t as the the variable name*/

typedef struct GPIO_RegDef_t{
	volatile uint32_t GPIO_MODER;
	volatile uint32_t GPIO_OTYPER;
	volatile uint32_t GPIO_OSPEEDR;
	volatile uint32_t GPIO_PUPDR;
	volatile uint32_t GPIO_IDR;
	volatile uint32_t GPIO_ODR;
	volatile uint32_t GPIO_BSRR;
	volatile uint32_t GPIO_LCKR;
	volatile uint32_t GPIO_AF[2];
}GPIO_RegDef_t;

#define GPIOA		((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB		((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC		((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD		((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE		((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF		((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG		((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH		((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI		((GPIO_RegDef_t*)GPIOI_BASEADDR)

#define BOOL		uint8_t

#define SET			1
#define RESET		0
#define PORT_SET	0xFFFF
#define PORT_CLEAR	0x0000



	typedef enum GPIO_PinNo_e{
		GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3,
		GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7,
		GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10, GPIO_PIN_11,
		GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15
	}GPIO_PinNo_e;

	typedef enum GPIO_PinMode_e{
		GPIO_MODE_OUTPUT, GPIO_MODE_INPUT,GPIO_MODE_ALTFN, GPIO_MODE_ANALOG
	}GPIO_PinMode_e;

	typedef enum GPIO_Leds_e{
		LED_GREEN = 12,LED_ORANGE,LED_RED,LED_BLUE
	}GPIO_Leds_e;



#endif /* STM32F4XX_H_ */
