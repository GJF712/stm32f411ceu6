//当前系统时钟，已经配置为96M，USB时钟只能为48MHz
//如果需要100MHz时钟，只需要将PLL_N设置为200即可�
#include "stm32f4xx.h"
#include "Bsp.h"
#include "App.h"


void Delay_Ms(uint16_t Ms){
	uint16_t _1Ms = 0;
	while(Ms--){
		for(_1Ms = 3840; _1Ms > 0; _1Ms--);
	}
}

int main(void){
	Bsp_Init();
	App_Init();
	while(1){
	}
}
