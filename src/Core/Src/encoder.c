#include "encoder.h"
#include "buzzer.h"

extern TIM_HandleTypeDef htim3;

extern volatile BuzzerTone_t buzzer_mode;

void encoder_init(void){
	HAL_TIM_Encoder_Start_IT(&htim3, TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_2);
}

uint32_t encoder_get_value(void){
	return __HAL_TIM_GET_COUNTER(&htim3);
}

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == htim3.Instance){
		buzzer_mode = BUZZER_TONE_MEDIUM;
	}
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == ENCODER_SW_Pin){
		buzzer_mode = BUZZER_TONE_LOW;
	}
}
