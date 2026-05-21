/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32u5xx_hal.h"

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
#define HUB75_R1_Pin GPIO_PIN_0
#define HUB75_R1_GPIO_Port GPIOE
#define HUB75_ROW_A_Pin GPIO_PIN_0
#define HUB75_ROW_A_GPIO_Port GPIOC
#define HUB75_ROW_B_Pin GPIO_PIN_2
#define HUB75_ROW_B_GPIO_Port GPIOC
#define HUB75_CLK_Pin GPIO_PIN_15
#define HUB75_CLK_GPIO_Port GPIOD
#define HUB75_G2_Pin GPIO_PIN_14
#define HUB75_G2_GPIO_Port GPIOE
#define HUB75_ROW_C_Pin GPIO_PIN_4
#define HUB75_ROW_C_GPIO_Port GPIOC
#define HUB75_G1_Pin GPIO_PIN_7
#define HUB75_G1_GPIO_Port GPIOE
#define HUB75_R2_Pin GPIO_PIN_13
#define HUB75_R2_GPIO_Port GPIOE
#define HUB75_OE_Pin GPIO_PIN_8
#define HUB75_OE_GPIO_Port GPIOD
#define HUB75_STB_Pin GPIO_PIN_9
#define HUB75_STB_GPIO_Port GPIOD
#define HUB75_B2_Pin GPIO_PIN_15
#define HUB75_B2_GPIO_Port GPIOE
#define HUB75_B1_Pin GPIO_PIN_12
#define HUB75_B1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
