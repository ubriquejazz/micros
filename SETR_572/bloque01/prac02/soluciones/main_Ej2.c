


/* USER CODE BEGIN Header_StartParpLedVerde */
/**
  * @brief  Function implementing the ParpLedVerde thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartParpLedVerde */
void StartParpLedVerde(void const * argument)
{
  /* init code for USB_HOST */
  /* USER CODE BEGIN 5 */
  /* Infinite loop */

	TickType_t RegTiempo;
	TickType_t Retardo = 1000;

	RegTiempo = xTaskGetTickCount();

	for(;;)
	{
		// Red LED ON – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		vTaskDelayUntil(&RegTiempo, Retardo);

		// Red LED OFF – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
		vTaskDelayUntil(&RegTiempo, Retardo);
	}

  /* USER CODE END 5 */ 
}

/* USER CODE BEGIN Header_StartParpLedRojo */
/**
* @brief Function implementing the ParppLedRojo thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartParpLedRojo */
void StartParpLedRojo(void const * argument)
{
  /* USER CODE BEGIN StartParpLedRojo */
  /* Infinite loop */
  TickType_t RegTiempo;
	TickType_t Retardo = 2000;

	RegTiempo = xTaskGetTickCount();

	for(;;)
	{
		// Red LED ON – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
		vTaskDelayUntil(&RegTiempo, Retardo);

		// Red LED OFF – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		vTaskDelayUntil(&RegTiempo, Retardo);
	}

  /* USER CODE END StartParpLedRojo */
}

