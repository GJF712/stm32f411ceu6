//��ǰϵͳʱ�ӣ��Ѿ�����Ϊ96M��USBʱ��ֻ��Ϊ48MHz
//�����Ҫ100MHzʱ�ӣ�ֻ��Ҫ��PLL_N����Ϊ200���ɡ
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
