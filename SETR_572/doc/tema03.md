# Exclusión mutua

1. Banderas
2. Semáforos
3. Mutex

## Mutex

Son similares a los semáforos pero diseñados específicamente para el control de acceso a recursos compartidos (los semáforos son mecanismos que también permiten sincronización entre tareas).

- La principal diferencia entre Mutex y semáforos es que la tarea que libera (Unlock) el Mutex debe ser obligatoriamente la que lo bloqueo.

- Podemos dejar un semáforo sin liberar.

- Los semáforos son visibles globalmente, por lo que cualquier tarea puede ejecutar una instrucción Signal

## Banderas

1 Cargar la variable bandera en un registro del procesador 
2 Comprobar su estado 
3 Si la bandera indica “libre”cambiar su estado a ocupado
sobre-escribir la variable <-- Y si la tarea es desalojada aqui??
4 Si la bandera indica “ocupado” reintentar

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