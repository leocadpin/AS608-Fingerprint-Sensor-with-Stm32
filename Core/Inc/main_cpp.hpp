/*
 * event_loop.hpp
 *
 *  Created on: May 26, 2024
 *      Author: leo
 */

#ifndef INC_MAIN_CPP_HPP_
#define INC_MAIN_CPP_HPP_

#include <stdint.h>
#include <stdio.h>


void main_cpp();   // Cpp function to call into main event loop
//#include <array>
#ifdef __cplusplus
extern "C"
{

#endif

	void EventLoopC();  // C function to call into Cpp event loop from main
#ifdef __cplusplus
}
#endif


#endif /* INC_MAIN_CPP_HPP_ */
