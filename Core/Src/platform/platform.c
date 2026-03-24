/* Директива препроцессора для подключения заголовочного файла */
#include "platform.h"

//#include "lab1_gpio/lab1_gpio.h"
//#include "lab2_timer/lab2_timer.h"
//#include "lab3_stepper/lab3_stepper.h"

int run = 1;
	int pause = 20;
	int b = 0;
	int dir = 1;
/* Однократный вызов */
int plt_init(void)
{

	return 0;
}


/* Повторяющийся вызов */
void plt_process(void)
{
	led_brightness(b);
	b = b + dir;
	if(b >= 100 || b <= 0) dir = dir*(-1);
}

/* Перенести в main.c в user code */
//void plt_delay(uint32_t delay_ms)
//{
//	HAL_Delay(delay_ms);
//}
