/*
 * LCD.cpp
 *
 *  Created on: May 29, 2024
 *      Author: leo
 */


#include "LCD.hpp"



LCD::LCD(data_pins_array data_pins,
		LCD_Port data_port,
		Gpio_pin rs_pin,
		LCD_Port rs_port,
		Gpio_pin rw_pin,
		LCD_Port rw_port,
		Gpio_pin en_pin,
		LCD_Port en_port):
		lcd_data_pins(data_pins),
		lcd_data_port(data_port),
		lcd_rs_pin(rs_pin),
		lcd_rs_port(rs_port),
		lcd_rw_pin(rw_pin),
		lcd_rw_port(rw_port),
		lcd_en_pin(en_pin),
		lcd_en_port(en_port)
{}

//LCD::LCD(data_pins_array data_pins,
//		LCD_Port data_port):
//		lcd_data_pins(data_pins),
//		lcd_data_port(data_port)
//{}

LCD::~LCD()
{

}

void LCD::test_lcd_pins(void)
{
	for(int i=0; i<4; i++)
		lcd_data_pins[i].Toggle();

	lcd_rs_pin.Toggle();
	lcd_rw_pin.Toggle();
	lcd_en_pin.Toggle();
}

bool LCD::init_lcd(void)
{
	bool ret = false;




	return ret;
}
bool LCD::lcd_print(const std::string& lcd_msg)
{
	bool ret = false;

	return ret;
}

