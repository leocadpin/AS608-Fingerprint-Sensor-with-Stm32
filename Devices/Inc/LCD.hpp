/*
 * LCD.hpp
 *
 *  Created on: May 29, 2024
 *      Author: leo
 */

#ifndef INC_LCD_HPP_
#define INC_LCD_HPP_


#include "gpio_pin.hpp"
#include <string>
#include <array>

using LCD_Port	= GPIO_TypeDef& ;
using data_pins_array = std::array<Gpio_pin, 4>&;

class LCD
{
	public:

		LCD(data_pins_array data_pins,
			LCD_Port data_port,
			Gpio_pin rs_pin,
			LCD_Port rs_port,
			Gpio_pin rw_pin,
			LCD_Port rw_port,
			Gpio_pin en_pin,
			LCD_Port en_port
		);   // Constructor

//		LCD(data_pins_array data_pins,
//			LCD_Port data_port
//		);   // Constructor

		~LCD();

		bool init_lcd(void);
		bool lcd_print(const std::string& lcd_msg);
		void test_lcd_pins(void);

	private:

		data_pins_array lcd_data_pins;
		LCD_Port lcd_data_port;
		Gpio_pin lcd_rs_pin;
		LCD_Port lcd_rs_port;
		Gpio_pin lcd_rw_pin;
		LCD_Port lcd_rw_port;
		Gpio_pin lcd_en_pin;
		LCD_Port lcd_en_port;

};


#endif /* INC_LCD_HPP_ */
