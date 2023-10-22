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

			LEDsDisplay();
			updateBufferForMode1();
			break;
		case MODE_2:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_3;

			LEDsBlink();
			break;
		case MODE_3:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_4;

			LEDsBlink();
			break;
		case MODE_4:
			if (isButtonPressed(BUTTON_1))
				mode = MODE_1;
			
			LEDsBlink();
			break;

		default:
			break;
	}
}
