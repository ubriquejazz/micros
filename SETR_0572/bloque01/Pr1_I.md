# Pr1_I: Hello world

## Ejercicio 1 

Configurado el hardware y generado el código fuente básico con la inclusión de FreeRTOS, se pide al alumno que programe e inserte el siguiente código en el bucle infinito de la función creada para la tarea por defecto StartDefaultTask():

    // Encendido del LED rojo – Pin 14
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); 
    // Software que “entretenga” al micro durante un segundo

    // Apagado del LED rojo – Pin 14
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_reset); 
    //Software que “entretenga” al micro durante medio segundo

Lugar – Tablero de discusión habilitado para la pareja de laboratorio en el aula virtual.
Contenido – Archivo .pdf con el código incluido en las funciones main() y StartDefaultTask().