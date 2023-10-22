/*
 * global.h
 *
 *  Created on: Oct 21, 2023
 *      Author: thien
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "fsm_mode.h"

#define NORMAL_STATE	GPIO_PIN_SET
#define PRESSED_STATE 	GPIO_PIN_RESET
#define BUTTON_1	0
#define BUTTON_2	1
#define BUTTON_3	2
#define BUTTONS		3

#define MODE_INIT	8
#define MODE_1		9
#define MODE_2		10
#define MODE_3		11
#define MODE_4		12

extern int mode;
extern int counterKeyPress;

#endif /* INC_GLOBAL_H_ */
