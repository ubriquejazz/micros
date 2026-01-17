# Pr2_I: Scheduling

## Ejercicio 1 - vTaskDelayUntil()

c) Cambie el retardo fijo de 2000 a 500 y estudie el comportamiento del sistema. ¿Cuál es el
periodo en este caso?

d) Aumente la duración del código que está ejecutando el procesador en el encendido del LED a
5s y estudie de nuevo el comportamiento del sistema.

## Ejercicio 2 - Tasks

Inserte el código adecuado en cada tarea para que 
- la luz verde se encienda durante 1 s
- la luz roja se encienda durante 2 s

## Ejercicio 3 - Entregable

a) En primer lugar, cree el proyecto correspondiente y fije la prioridad de la tarea ParpLedRojo por encimal de la de ParpLedVerde
b) Programe el código de las tareas y compruebe que funcionan correctamente de manera
individual.
c) Analice el comportamiento que espera constatar en la práctica para un planificador
con prioridades fijas y desalojo.
d) Compruebe el funcionamiento del sistema y evalúe sus predicciones.
e) Invierta el esquema de prioridades y repita los experimentos.

**ParpLedVerde**

- Periodo: 10
- Tiempo que el led debe estar parpadeando: 4

Estructura de ParpLedVerde

o Encendido del led azul.
o Ejecución del código de esta tarea con el led verde parpadeando durante 4 s.
o Apagado del led verde y del led azul.
o Suspensión de la tarea hasta el final de su periodo.


**ParpLedRojo**

- Periodo: 2
- Tiempo que el led debe estar parpadeando: 1

Estructura de ParpLedRojo

o Encendido del led naranja.
o Ejecución del código de esta tarea con el led rojo parpadeando durante 1 s.
o Apagado del led rojo y del led naranja.
o Suspensión de la tarea hasta el final de su periodo.

