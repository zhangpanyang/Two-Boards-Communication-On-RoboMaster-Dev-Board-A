//
// Created by Sunny on 24-10-20.
//

#include "key_task.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (GPIO_Pin == KEY_Pin)
	{
		canSendSignal();
	}
}