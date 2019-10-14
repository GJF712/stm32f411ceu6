#include "Bsp.h"
#include "Common_GPIO.h"
#include "TIM11.h"

void Bsp_Init(void){
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	
	LED_PC13_Init();
	TIM11_Int_Init();
	
	TIM11_NVIC_Config();
	
}
