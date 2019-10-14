#include "TIM11.h"
#include "Common_GPIO.h"
#include <limits.h>

void TIM11_Int_Init(void){
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM11, ENABLE);

	TIM_TimeBaseStructInit(&TIM_TimeBaseInitStructure);
	TIM_TimeBaseInitStructure.TIM_Period = 1000-1;//USHRT_MAX;
	TIM_TimeBaseInitStructure.TIM_Prescaler = 48000 - 1;
	TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseInit(TIM11, &TIM_TimeBaseInitStructure);

	TIM_ITConfig(TIM11, TIM_IT_Update, ENABLE);
	TIM_Cmd(TIM11, ENABLE);
}

void TIM11_NVIC_Config(void){
	NVIC_InitTypeDef NVIC_InitStructure;

	NVIC_InitStructure.NVIC_IRQChannel = TIM1_TRG_COM_TIM11_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x01;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x03;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}

void TIM11_Update_IRQ(void){
	LED_Flicker();
}
