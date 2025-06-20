/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USER_KEY_Pin GPIO_PIN_0
#define USER_KEY_GPIO_Port GPIOA
#define TM1637_DIO_Pin GPIO_PIN_1
#define TM1637_DIO_GPIO_Port GPIOA
#define TM1637_CLK_Pin GPIO_PIN_2
#define TM1637_CLK_GPIO_Port GPIOA
#define DHT11_DIO_Pin GPIO_PIN_3
#define DHT11_DIO_GPIO_Port GPIOA
#define USER_LED_Pin GPIO_PIN_2
#define USER_LED_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_8
#define BUZZER_GPIO_Port GPIOA
#define ENCODER_A_Pin GPIO_PIN_4
#define ENCODER_A_GPIO_Port GPIOB
#define ENCODER_B_Pin GPIO_PIN_5
#define ENCODER_B_GPIO_Port GPIOB
#define ENCODER_SW_Pin GPIO_PIN_6
#define ENCODER_SW_GPIO_Port GPIOB
#define ENCODER_SW_EXTI_IRQn EXTI9_5_IRQn
#define HUMIDIFER_Pin GPIO_PIN_8
#define HUMIDIFER_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
