/*
 * gpio_pin.cpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */


#include "gpio_pin.hpp"

Gpio_pin::Gpio_pin()
{

}

Gpio_pin::Gpio_pin(uint16_t pin, GPIO_TypeDef& port)
    :
	gpio_pin(pin),
    gpio_port(&port)
{
}

bool Gpio_pin::Read()
{
    return HAL_GPIO_ReadPin(gpio_port, gpio_pin);
}

void Gpio_pin::Set()
{
    HAL_GPIO_WritePin(gpio_port, gpio_pin, GPIO_PIN_SET);
}

void Gpio_pin::Clear()
{
    HAL_GPIO_WritePin(gpio_port, gpio_pin, GPIO_PIN_RESET);
}

void Gpio_pin::Toggle()
{
    HAL_GPIO_TogglePin(gpio_port, gpio_pin);
}

void Gpio_pin::Init(uint8_t speed)
{
	GPIO_InitTypeDef gpio_init_config = {0};

	if(gpio_port == GPIOA)
	{
		__HAL_RCC_GPIOA_CLK_ENABLE();
	}
	if(gpio_port == GPIOB)
	{
		__HAL_RCC_GPIOB_CLK_ENABLE();
	}
	if(gpio_port == GPIOC)
	{
		__HAL_RCC_GPIOC_CLK_ENABLE();
	}
	if(gpio_port == GPIOD)
	{
		__HAL_RCC_GPIOD_CLK_ENABLE();
	}
	gpio_init_config.Pin = gpio_pin;
	gpio_init_config.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_init_config.Pull = GPIO_NOPULL;

	switch (speed)
	{
	  case 0:
		  gpio_init_config.Speed = GPIO_SPEED_FREQ_LOW;
	    break;
	  case 1:
		  gpio_init_config.Speed = GPIO_SPEED_FREQ_MEDIUM;
	    break;
	  case 2:
		  gpio_init_config.Speed = GPIO_SPEED_FREQ_HIGH;
	    break;
	  case 3:
		  gpio_init_config.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
	    break;
	  default:
		  gpio_init_config.Speed = GPIO_SPEED_FREQ_LOW;
	}



	HAL_GPIO_Init(gpio_port, &gpio_init_config);
}
