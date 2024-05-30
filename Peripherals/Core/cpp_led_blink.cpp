/*
 * cpp_led_blink.cpp
 *
 *  Created on: May 24, 2024
 *      Author: leo
 */


#include "cpp_led_blink.hpp"



CppLedBlink::CppLedBlink()
{
    while(1)
    {
        for(int i = 0; i < 1000000; i++);
        mPinout.mTestLed.Toggle();
    }

}

