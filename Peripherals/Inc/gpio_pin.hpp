/*
 * gpio_pin.hpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */

#ifndef INC_GPIO_PIN_HPP_
#define INC_GPIO_PIN_HPP_

#include "stm32f4xx_hal.h"

class Gpio_pin
{
public:
	Gpio_pin();
	Gpio_pin(uint16_t pin, GPIO_TypeDef& port);   // Constructor

    bool Read();
    void Set();
    void Clear();
    void Toggle();
    void Init(uint8_t speed);

private:
    uint16_t gpio_pin{};
    GPIO_TypeDef* gpio_port{};
};


#endif /* INC_GPIO_PIN_HPP_ */
