/*
 * cpp_blink_pinout.hpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */

#ifndef INC_CPP_BLINK_PINOUT_HPP_
#define INC_CPP_BLINK_PINOUT_HPP_


#include <main.h>
#include "gpio_pin.hpp"

class CppBlinkPinout
{
public:
    CppBlinkPinout();

    // Define all wanted GPIO pins for specific project below
    Gpio_pin mTestLed;
};


#endif /* INC_CPP_BLINK_PINOUT_HPP_ */
