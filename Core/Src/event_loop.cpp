/*
 * event_loop.cpp
 *
 *  Created on: May 26, 2024
 *      Author: leo
 */


#include "event_loop.hpp"
#include "cpp_led_blink.hpp"
// Main Cpp event loop to run application
void EventLoopCpp()
{

	Gpio_pin led_pin(GPIO_PIN_0, GPIOB);
	led_pin.Init();

	while (1)
	{
		led_pin.Toggle();
		HAL_Delay(1000);
	}

}

// Define all C function calls from main.c below
extern "C"
{
    void EventLoopC()
    {
        EventLoopCpp();
    }
}

