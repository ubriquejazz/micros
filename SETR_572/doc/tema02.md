# Planificación: implementación

## En que orden se ejecutan las tareas?

- Lo decide el “scheduler” en base a un algoritmo definido al diseñar el sistema.
- Un algoritmo de planificación (que determina orden de acceso a recursos).
- Un método de análisis/predicción del caso peor.

## Parametros

N – Número de procesos del sistema.
Ti– Periodo de ejecución del proceso i.
Ci– Tiempo de ejecución máximo del proceso i (caso peor).
Di– Plazo de respuesta del proceso i (deadline).
Ri– Tiempo máximo en el que el sistema dará respuesta al proceso i (caso peor).
Pi– Prioridad asignada al proceso i (si aplica).
Ui– Utilización que el proceso i hace del microprocesador (= C/T) 
Ii– Tiempo de interferencia en el proceso i.

    Ci ≤ Di=Ti
    Objetivo Ri ≤ Di

## Planificación cíclica simple, temporizada y cooperativa

### FIFO

- Las tareas se ordenan en una cola estática por orden de llegada (FIFO)

### Round-Robin (cuestion)

- Asigna a cada tarea un intervalo de tiempo idéntico y las planifica en orden de llegada (cola FIFO). 
- Asigna a cada tarea un intervalo de tiempo que depende de su plazo de ejecución.
- Ejecuta las tareas siempre en intervalos regulares.

## Sistema de prioridades y colas

## Con prioridad fija y desalojo
 
## Con prioridad dinamica y desalojo (cuestion)

Un planificador con desalojo y prioridades dinámicas de tipo CTS (Computation Time Scheduler), replanifica las prioridades en un deteminado momento:

- Calculando el tiempo que resta para que cada tarea llegue a su deadline y asignando una prioridad inversamente proporcional a ese tiempo.

- Calculando el tiempo de ejecución que resta para cada tarea y asignando una prioridad directamente proporcional a ese tiempo.

- Calculando la diferencia entre el periodo de ejecución de cada tarea y el tiempo que ya lleva cada una ejecutándose y asignando una prioridad inversamente proporcional a esa diferencia.