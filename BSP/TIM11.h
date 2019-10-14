#ifndef _TIM11_H_
#define _TIM11_H_

#include "stm32f4xx.h"

void TIM11_Int_Init(void);
void TIM11_NVIC_Config(void);
void TIM11_Update_IRQ(void);


#endif
