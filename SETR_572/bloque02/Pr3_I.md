# Pr3_I: Shared resources

## Ejercicio 1 - Flag

Tarea GREEN (período: 1s) 

    Encender el LED verde
    
    // Acceso a la zona de memoria compartida 
    Comprobar el estado de la bandera: si es Up, ponerla en Down, simular la lectura y escritura en el recurso compartido durante 500ms y subir la bandera. 
    Si es Down encender el LED azul. 
    
    Apagar el LED verde

Tarea RED (período: 700 ms) 

    Encender el LED rojo
    ...
    Apagar el LED rojo

- Modifique la periodicidad de la tarea y compruebe los efectos que tiene esta variación en la aparición del primer conflicto (700 ms)

### Ejercicio 2: Suspension planificador

    void helper()
        taskENTER_CRITICAL(); 
        Comprobación de la bandera, etc. 
        taskEXIT_CRITICAL();

Compruebe el funcionamiento del sistema. ¿Se enciende el LED azul en algún momento? ¿Cuáles son los efectos negativos de esta técnica?

### Ejercicio 3 -  Nuevo código

Tareas RED = 200 ms, GREEN = 550 ms (misma prioridad)

Tarea ORANGE = 50 ms (alta prioridad)

    HAL_GPIO_WritePin(GPIOD, PIN_XXX, GPIO_PIN_SET); // GREEN y RED 
    helper(PIN_BLUE);
    osDelay(miDelay);
    HAL_GPIO_WritePin(GPIOD, PIN_XXX, GPIO_PIN_RESET); // GREEN y RED 
    osDelay(miDelay);

**helper(int pin)**

- Ponerla en *Down* si el Flag está libre o encender el LED azul en caso contrario. 
- Simular la lectura y escritura en el recurso compartido durante 1s. 
- Apagar el LED azul y subir la bandera (1)

a) Probar cada una de las tareas independientemente.

b) Ejecute las tres tareas sin implementar ningún método de exclusión mutua, fijando en ***Normal*** la prioridad de las tareas 1 y 2, y ***Above*** ***Normal*** la prioridad de la tarea 3 (ORANGE)

c) Ejecute las tres tareas implementando la suspensión del planificador.

d) Compare el funcionamiento global del sistema en los tres casos y extraiga las conclusiones oportunas.

### Ejercicio 4 - Semaforos

a) Modifique el código del ejercicio anterior creando un semáforo binario y sustituyendo las instrucciones que deshabilitan y habilitan el planificador por las que utilizan el semáforo.

___

b) Pruebe el funcionamiento del semáforo fijando el parámetro WaitTimeMilliseconds a 0.

Using a 0-millisecond timeout is commonly referred to as **polling** or **try-acquire**.

- **Avoid Deadlock:** It guarantees that your task will never block indefinitely,  which can be useful in time-sensitive control loops or tasks that must not miss a deadline.
- **Alternative to Blocking:** It is the standard way to implement a **try-acquire** or a **non-blocking attempt** to access a resource.

---

c) Estudie el funcionamiento del sistema en ambos casos y compárelo con el funcionamiento de ejercicio anterior. El uso de un semáforo como método de exclusión mutua, ¿mejora el rendimiento del sistema?

### Ejercicio 5 - Mutex

a) Modifique el código del ejercicio 5a) creando un Mutex y utilizándolo como método de exclusión mutua sustituyendo las instrucciones que correspondan.

El uso del mutex bloquea el parpade del led rojo y verde. Esto se debe a que el mutex debe ser liberado por la tarea que lo creo. 

---

b) ¿Observa alguna diferencia significativa en el rendimiento del sistema?

Using a Mutex is the correct synchronization primitive for protecting the shared global variable `Flag` from being simultaneously accessed or modified by multiple concurrent tasks.

However, the key takeaway remains the same: You must not include the blocking delay while the Mutex is held.

**Access:** The lines `if (Flag == 1) { Flag = 0; } else { action_needed = 1; }` are executed safely and atomically relative to other tasks.
