/**
 * @file led.c
 * @author CGN
 * @brief
 * @date 2022.06.24
 * @copyright Copyright (c) 2022
 */

#include "led.h"
#include "main.h"
#include "stm32f1xx_hal_gpio.h"

void task_led(void const * argument)
{
    while(1)
    {
        HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
    }
}
