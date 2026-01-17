# Pr4_I: Comunicacion entre tareas

**Objetivos**

- coordinar las tareas mediante el uso de banderas condicionales
- sincronización unilateral utilizando banderas de evento.

## Ejercicio 1: Libreria conditionflag.h

Objetivo: coordinar la tarea que hace parpadear el LED azul con las otras dos.

<img src="fig/ej101.png" alt="alt text" title="bandera condicion" style="zoom:67%;" />

**Tarea Parpadeo del LED azul.**

- Parpadeo del LED, inicialmente, a HF.
- Si las dos banderas están en SET, pasar a parpadea a LF. 
- Si las dos banderas están en RESET, pasar a parpadea a HF.

**Tarea Parpadeo del LED rojo/verde** 

- Parpadeo del LED a HF durante 10s. Set de la bandera 1.
  Parpadeo del LED a LF durante 10s. Clear de la bandera 1.
  Parpadeo del LED a HF durante 10s. Fin de la tarea.
- Parpadeo del LED a HF durante 15s. Set de la bandera 2.
  Parpadeo del LED a LF durante 10s. Clear de la bandera 2.
  Parpadeo del LED a HF durante 5s. Fin de la tarea.

a) Dibuje un cronograma en el que se muestre la secuencia de eventos que se produce en el mismo.
b) Complete la definición de la bandera para convertirla en un objeto encapsulado (conditionflag.h)

## Ejercicio 2: osSignal

La tarea Azul será la tarea remitente (oSignalSet) mientras que las tareas Verde y Roja serán las tareas receptoras (Wait):

<img src="fig/ej102.png" alt="alt text" title="sincronización unilateral" style="zoom:67%;" />

Cuando una tarea receptora tiene que hacer un Wait con este mecanismo, lo hace mediante la instrucción **osSignalWait**(0x1,osWaitForever). La tarea quedará, entones, esperando a que otra tarea haga un Set sobre este bit. Para ello, la tarea remitente utilizará la instrucción **osSignalSet**(NombreTareaReceptora, 0x1). 

Implemente la arquitectura detallados en la figura. Compruebe los resultados y dibuje los cronogramas correspondientes para explicar la evolución del sistema.

---

References:

- High Freq (HF) = 10 Hz
- Low Freq (LF)= 1 second