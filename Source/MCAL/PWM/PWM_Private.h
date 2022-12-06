/*
 * PWM_Private.h
 *
 * Created: 9/17/2022 3:30:59 PM
 *  Author: OmarK
 */ 


#ifndef PWM_PRIVATE_H_
#define PWM_PRIVATE_H_


#include "PWM_Config.h"

void PWM_Init(void);
void PWM_Start(PWM_PRESCALER prescaler);
void PWM_Stop(void);
void PWM_SetDuty(PWM_MODE mode, uint8_t dutyCycle);


#endif /* PWM_PRIVATE_H_ */