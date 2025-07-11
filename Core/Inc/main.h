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
#define BOARD_LED_Pin GPIO_PIN_13
#define BOARD_LED_GPIO_Port GPIOC
#define ADC_BAT_Pin GPIO_PIN_0
#define ADC_BAT_GPIO_Port GPIOA
#define DISP_B_Pin GPIO_PIN_12
#define DISP_B_GPIO_Port GPIOB
#define DISP_A_Pin GPIO_PIN_13
#define DISP_A_GPIO_Port GPIOB
#define DISP_F_Pin GPIO_PIN_14
#define DISP_F_GPIO_Port GPIOB
#define DISP_G_Pin GPIO_PIN_15
#define DISP_G_GPIO_Port GPIOB
#define DISP_DP_Pin GPIO_PIN_8
#define DISP_DP_GPIO_Port GPIOA
#define DISP_C_Pin GPIO_PIN_9
#define DISP_C_GPIO_Port GPIOA
#define DISP_D_Pin GPIO_PIN_10
#define DISP_D_GPIO_Port GPIOA
#define DISP_E_Pin GPIO_PIN_11
#define DISP_E_GPIO_Port GPIOA
#define DISPLAY_1_Pin GPIO_PIN_12
#define DISPLAY_1_GPIO_Port GPIOA
#define DISPLAY_2_Pin GPIO_PIN_15
#define DISPLAY_2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
