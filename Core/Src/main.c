#include <main.h>
#include "SysConfig.h"


int main(void)
{
	HAL_Init();
	SysConfigClock();


	EventLoopC();

}


void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
