/*
 * gpio.c
 *
 *  Created on: May 17, 2024
 *      Author: leo
 */

#include "gpio.h"

void gpio_led_init(void)
{
	GPIO_InitTypeDef gpio_init = {0};

	__HAL_RCC_GPIOC_CLK_ENABLE();

	gpio_init.Pin = GPIO_PIN_13;
	gpio_init.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_init.Pull = GPIO_NOPULL;
	gpio_init.Speed = GPIO_SPEED_FREQ_LOW;

	HAL_GPIO_Init(GPIOC, &gpio_init);
}


void gpio_led_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
}
