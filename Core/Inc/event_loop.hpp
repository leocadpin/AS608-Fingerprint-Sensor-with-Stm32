/*
 * event_loop.hpp
 *
 *  Created on: May 26, 2024
 *      Author: leo
 */

#ifndef INC_EVENT_LOOP_HPP_
#define INC_EVENT_LOOP_HPP_





#include <stdint.h>
#include <stdio.h>

void EventLoopCpp();   // Cpp function to call into main event loop

#ifdef __cplusplus
extern "C"
{
#endif
    void EventLoopC();  // C function to call into Cpp event loop from main
#ifdef __cplusplus
}
#endif


#endif /* INC_EVENT_LOOP_HPP_ */
