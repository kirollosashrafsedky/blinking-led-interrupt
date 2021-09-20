/* Basic */
#include "blinking-led-with-interrupt.h"
#include "Mcal/lib/core.h"
#include "Mcal/lib/registers.h"
#include "Infrastructure/types.h"

/* MCAL */
#include "Mcal/Dio/dio.h"
#include "Mcal/Timer/timer.h"

/* ECUAL */
#include "Ecual/Led/led.h"


int main(void) {
	LED_init(PA0, LED_OFF, LED_POSITIVE_LOGIC);

	uint32_t ticks = TIME_MS_TO_TICKS(64, 300);

	ST_TIMER_config timer_Config = { TIMER_2, TIMER_2_CTC, TIMER_2_PRESCALER_64, ticks, 0, 0, timerHandler };

	timer_init(&timer_Config);

	timer_start(TIMER_2);

	ENABLE_GLOBAL_INTERRUPT();
	while(1);
}

void timerHandler(void)
{
	LED_toggle(PA0);
}

