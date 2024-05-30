/*
 * cpp_led_blink.hpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */

#ifndef INC_CPP_LED_BLINK_HPP_
#define INC_CPP_LED_BLINK_HPP_

#include "cpp_blink_pinout.hpp"
class CppLedBlink
{
public:
    CppLedBlink();

private:
    CppBlinkPinout mPinout;
};


#endif /* INC_CPP_LED_BLINK_HPP_ */
