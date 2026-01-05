# Introduccion a Planificación. 

## Sistema de control de la presión de una sala

C: Tiempo de ejecución máximo.
D: Plazo de respuesta máximo (caso peor)
R: Tiempo de respuesta.
T: Periodo de ejecución.

while (true) {
    Medir la presión de la sala
    Ejecutar el algoritmo de control
    Ajustar la posición de la entrada de aire 
    Esperar hasta XX
}

## Sistema de control de las condiciones ambientales de una sala

Presion                 Temperatura
C1=5ms / T1=20ms        C2=5ms / T2=40ms

    contador = 1;
    while(true)

        if (contador==1) {
            Controlar_Presion();
            Controlar_Temperatura();
            contador = 2; }
        else {
            Controlar_Presion(); 
        }
        EsperarHasta(20ms);

- ¿Y si hay una tercera tarea para controlar la humedad con C3=5ms / T3=80ms?
- ¿Y si hay 40 salas?

## Cuestion C3

Siendo Ti el periodo de ejecución de la tarea i, Ci su plazo de ejecución máximo (peor caso), Di su plazo de respuesta y Ri tiempo de respuesta máximo (peor caso), indique cuál de las siguientes fórmulas permiten afirmar que el sistema no será planificable:

    Ti = Di planificable
    Ci < Di planificable
    Ri > Di no planificable
    Ci > Di no planificable