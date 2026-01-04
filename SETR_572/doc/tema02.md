# Planificación. Conceptos básicos e implementación

## En que orden se ejecutan las tares?

§ Lo decide el “scheduler” o planificador en base a un algoritmo definido al diseñar el sistema.

§ Un algoritmo de planificación (que determina orden de acceso a recursos).

§ Un método de análisis/predicción del caso peor.

## Parametros

N – Número de procesos del sistema.
Ti– Periodo de ejecución del proceso i.
Ci– Tiempo de ejecución máximo del proceso i (caso peor).
Di– Plazo de respuesta del proceso i (deadline).
Ri– Tiempo máximo en el que el sistema dará respuesta al proceso i (caso peor).
Pi– Prioridad asignada al proceso i (si aplica).
Ui– Utilización que el proceso i hace del microprocesador (= C/T) 
Ii– Tiempo de interferencia en el proceso i.

    Ci≤ Di=Ti

    Objetivo Ri<=Di

## Planificación cíclica simple, temporizada y planificación cooperativa

### FIFO

§ Las tareas se ordenan en una cola estática por orden de llegada (FIFO)

## Round-Robin

## Sistema de prioridades y colas

## Con prioridad fija y desalojo