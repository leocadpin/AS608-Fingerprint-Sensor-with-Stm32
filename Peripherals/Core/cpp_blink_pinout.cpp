/*
 * cpp_blink_pinout.cpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */


#include "cpp_blink_pinout.hpp"

CppBlinkPinout::CppBlinkPinout()
    :
    // Wrap all GPIO pins / ports into project from main.h
    mTestLed(GPIO_PIN_13, GPIOC)
{
}

