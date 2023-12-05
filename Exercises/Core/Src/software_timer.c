/*
 * software_timer.c
 *
 *  Created on: Oct 21, 2023
 *      Author: thien
 */

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;
int TIMER_CYCLE = 1;

void setTimer1(int duration){
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}
