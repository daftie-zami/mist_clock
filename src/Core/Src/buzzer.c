#include "buzzer.h"

extern TIM_HandleTypeDef htim1;

volatile BuzzerTone_t buzzer_mode = BUZZER_TONE_NONE;

void buzzer_init(void) {
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 1);
    __HAL_TIM_SET_AUTORELOAD(&htim1, 1);
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}

void buzzer_set(uint32_t arr) {
    if (arr == 0)
        return;

    __HAL_TIM_SET_AUTORELOAD(&htim1, arr);
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, arr / 2);
}

void buzzer_silent(void) {
    buzzer_set(1);
}

void buzzer_run(void) {
    switch (buzzer_mode) {
        case BUZZER_TONE_LOW:
            buzzer_set(2000);
            HAL_Delay(40);
            buzzer_silent();
            break;

        case BUZZER_TONE_MEDIUM:
            buzzer_set(1000);
            HAL_Delay(30);
            buzzer_silent();
            break;

        case BUZZER_TONE_HIGH:
            buzzer_set(700);
            HAL_Delay(25);
            buzzer_silent();
            break;

        case BUZZER_TONE_ERROR:
            for (int i = 0; i < 2; i++) {
                buzzer_set(1000);
                HAL_Delay(50);
                buzzer_silent();
                HAL_Delay(50);
            }
            break;

        default:
            break;
    }

    buzzer_mode = BUZZER_TONE_NONE;
}


