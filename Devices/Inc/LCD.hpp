/*
 * LCD.hpp
 *
 *  Created on: May 29, 2024
 *      Author: leo
 */

#ifndef INC_LCD_HPP_
#define INC_LCD_HPP_

#include "gpio_pin.hpp"

//#define LCD_Pin 	uint16_t
#define LCD_Port	GPIO_TypeDef*

class LCD
{
	public:

		LCD(Gpio_pin* data_pins, LCD_Port data_port);   // Constructor

		bool lcd_print();


	private:



};


#endif /* INC_LCD_HPP_ */
