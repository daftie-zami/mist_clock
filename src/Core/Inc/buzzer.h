#pragma once

#include "tim.h"

typedef enum {
    BUZZER_TONE_NONE = 0,
    BUZZER_TONE_LOW,      // ~1 kHz
    BUZZER_TONE_MEDIUM,   // ~2 kHz
    BUZZER_TONE_HIGH,     // ~4 kHz
    BUZZER_TONE_ERROR,    // özel hata tonu
} BuzzerTone_t;

void buzzer_init(void);
void buzzer_set(volatile uint32_t ARR);
void buzzer_run(void);
