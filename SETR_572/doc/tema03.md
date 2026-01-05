# Exclusión mutua

1. Banderas
2. Semáforos
3. Mutex

## Mutex

Son similares a los semáforos pero diseñados específicamente para el control de acceso a recursos compartidos (los semáforos son mecanismos que también permiten sincronización entre tareas).

- La principal diferencia entre Mutex y semáforos es que la tarea que libera (Unlock) debe ser obligatoriamente la que lo bloqueo (Lock).

- Podemos dejar un semáforo sin liberar.

- Los semáforos son visibles globalmente, por lo que cualquier tarea puede ejecutar una instrucción Signal

## Banderas

- Cargar la variable bandera en un registro del procesador
- Comprobar su estado 
- Si la bandera indica “libre” cambiar su estado a ocupado; 
- - sobre-escribir la variable <-- Y si la tarea es desalojada aqui??
- Si la bandera indica “ocupado” reintentar con timeout

## Semaforo

Wait y Signal se definen como primitivas cuya secuencia de instrucciones de código máquina no puede interrumpirse

    /* Parte del código del procedimiento Wait */ 
    if (SemaforoConsignas == 1) {
        SemaforoConsignas = 0; 
    }

    /* Parte del código del procedimiento Signal */ 
    if (Tarea Esperando) {
        DespiertaTarea(); 
    }

    /* Código de la tarea Instrucciones no críticas 
    Wait(SemaforoConsignas); 
    Uso del recurso compartido Signal(SemaforoConsignas); 

## Cuestion C6

Desventaja del semaforo:

- El semáforo queda asociado de manera automática al recurso cuyo acceso protegen.
- No se puede consultar el estado de un semáforo sin solicitar el acceso al recurso compartido.

## Cuestion C10

Los mecanismos de exclusión mutua pueden generar problemas de bloqueos cuando:

- Hay tareas que necesitan mantener el uso de un RC mientras esperan la asignación de otro.
- Cada tarea adquiere todos los recursos que necesita al mismo tiempo.

## Cuestion C7

Inversion de prioridades - algoritmo de herencia

- Permite que, en determinadas circunstancias, una tarea de menor prioridad se ejecute antes que una de mayor prioridad.

- Invierte, en determinadas circunstancias, las prioridades de todas las tareas de un sistema de tiempo real para resolver problemas de bloqueos p
