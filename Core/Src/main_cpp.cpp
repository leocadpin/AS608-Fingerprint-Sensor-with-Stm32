/*
 * event_loop.cpp
 *
 *  Created on: May 26, 2024
 *      Author: leo
 */



#include <main_cpp.hpp>
#include "cpluplus_main_includes.hpp"



std::array<uint16_t, 4> pin_ids = {GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3};

void lcd_pins_config(	std::array<Gpio_pin,4>& data_pins,
						GPIO_TypeDef*& data_port,
						Gpio_pin&  rs_pin,
						GPIO_TypeDef*& rs_port,
						Gpio_pin&  rw_pin,
						GPIO_TypeDef*& rw_port,
						Gpio_pin&  en_pin,
						GPIO_TypeDef*& en_port);




// Main Cpp event loop to run application
void main_cpp()
{

	//Init LCD pins
	std::array<Gpio_pin, 4> data_pins{};
	GPIO_TypeDef* data_port{};
	Gpio_pin rs_pin;
	GPIO_TypeDef* rs_port{};
	Gpio_pin rw_pin;
	GPIO_TypeDef* rw_port{};
	Gpio_pin en_pin;
	GPIO_TypeDef* en_port{};
	lcd_pins_config(data_pins, data_port, rs_pin, rs_port, rw_pin, rw_port, en_pin, en_port);



	LCD my_lcd(data_pins, *data_port, rs_pin, *rs_port, rw_pin, *rw_port, en_pin, *en_port);

	while (1)
	{

		my_lcd.test_lcd_pins();
		HAL_Delay(1000);
	}

}

// Define all C function calls from main.c below
extern "C"
{
    void EventLoopC()
    {
        main_cpp();
    }
}


void lcd_pins_config(std::array<Gpio_pin,4>& data_pins, GPIO_TypeDef*& data_port,
					 Gpio_pin&  rs_pin,GPIO_TypeDef*& rs_port,
					 Gpio_pin&  rw_pin,GPIO_TypeDef*& rw_port,
					 Gpio_pin&  en_pin,GPIO_TypeDef*& en_port)
{
	data_port = GPIOA;
	for(int i = 0; i < 4; i++)
	{
		data_pins[i] = Gpio_pin(pin_ids[i], *data_port);
		data_pins[i].Init(2);
	}

	rs_port = data_port;
	rs_pin = Gpio_pin(GPIO_PIN_4, *rs_port);
	rs_pin.Init(2);

	rw_port = data_port;
	rw_pin = Gpio_pin(GPIO_PIN_5, *rw_port);
	rw_pin.Init(2);

	en_port = data_port;
	en_pin = Gpio_pin(GPIO_PIN_6, *en_port);
	en_pin.Init(2);

}
