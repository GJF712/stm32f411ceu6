//µ±Ç°ÏµÍ³Ê±ÖÓ£¬ÒÑ¾­ÅäÖÃÎª96M£¬USBÊ±ÖÓÖ»ÄÜÎª48MHz
//Èç¹ûÐèÒª100MHzÊ±ÖÓ£¬Ö»ÐèÒª½«PLL_NÉèÖÃÎª200¼´¿É¡
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
