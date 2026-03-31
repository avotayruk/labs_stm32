/* Директива препроцессора для подключения заголовочного файла */
#include "platform.h"

#include "lab1_gpio/lab1_gpio.h"
#include "lab2_timer/lab2_timer.h"
#include "lab3_stepper/lab3_stepper.h"


int run = 1;
int pause = 20;
int b = 0;
int dir = 1;

/* Однократный вызов */

//void my_function(void) {
//	    static int step_n = 0;  // инициализируется один раз
//	    step_n++;
//	    printf("Шаг: %d\n", step_n);
//	}

int plt_init(void)
{

	return 0;
}


//	int step_n = 0;
	int half_step_n = 0;

/* Повторяющийся вызов */

void plt_process(void)
{
//
//	plt_stepper_full(step_n);
//	step_n = (step_n+1)%4;
//	plt_delay(20);

	plt_stepper_half(half_step_n);
		half_step_n = (half_step_n)%8;
		plt_delay(10);
// это для полушагового
}

/* Перенести в main.c в user code */
//void plt_delay(uint32_t delay_ms)
//{
//	HAL_Delay(delay_ms);
//}
