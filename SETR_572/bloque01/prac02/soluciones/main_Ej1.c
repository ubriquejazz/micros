

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
  /* init code for USB_HOST */
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
	TickType_t RegTiempo;
	TickType_t Retardo = 4000;

	RegTiempo = xTaskGetTickCount();

	for(;;)
	{
		// Red LED ON – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);

		// Code to keep the processor busy for one second
		for(long j=0;j<1250000;j++){
			__NOP();
		}
		vTaskDelayUntil(&RegTiempo, Retardo);

		// Red LED OFF – Pin 14
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		vTaskDelayUntil(&RegTiempo, 2000);
	}
  /* USER CODE END 5 */ 
}

