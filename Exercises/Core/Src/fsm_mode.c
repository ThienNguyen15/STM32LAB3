/*
 * fsm_mode.c
 *
 *  Created on: Oct 21, 2023
 *      Author: thien
 */

#include "fsm_mode.h"

void fsm_mode()
{
	switch(mode)
	{
		case MODE_INIT:
			mode = MODE_1;
			break;
		case MODE_1:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_2;
			HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
			break;
		case MODE_2:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_3;
			HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
			break;
		case MODE_3:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_4;
			HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
			break;
		case MODE_4:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_1;
			HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
			break;

		default:
			break;
	}
}
