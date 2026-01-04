


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

	for(;;)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);

		for(long i=0;i<80;i++)
		{
			HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
			for(long j=0;j<62500;j++)
			{
				__NOP();
			}
		}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
		vTaskDelay(6000);
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

	for(;;)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);

		for(long i=0;i<20;i++)
		{
			HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
			for(long j=0;j<62500;j++)
			{
				__NOP();
			}
		}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
		vTaskDelay(1000);
	}
  /* USER CODE END StartParpLedRojo */
}
