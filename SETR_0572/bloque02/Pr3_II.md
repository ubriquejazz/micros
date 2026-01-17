# Pr3_II: Inversión de Prioridades 

Prioridades

    Red     HighPrior 
    Orange  Medium 
    Green   Low Prior 

Tareas

    ParpGreen = 2s (zona compartida) + 4s 
    ParpRed = 2s (zona compartida) + 4s 
    ParpOrange = 4s 

## Ejercicio 01

1. Run the tasks simultaneously. This sequence will be similar to the one shown below.

![Figure 1](fig/fig301.png "sin delay")

2. Execute only the GREEN task. Modify the RED task to start its execution, before simulating the access to the shared resource, suspending for 1s. Use osDelay(1000). This sequence will be like the one shown below.

![Figure 2](fig/fig302.png "delayed")

3. Going back to the three tasks, modify the code of the RED and ORANGE task so that they start their execution by suspending for 1s. In this way, it will be the GREEN task, the lowest priority, that will acquire the semaphore and leave it blocked when it is evicted. Draw the corresponding timeline and explain how the inversion of priorities is reflected in it.

---

Unfortunately the use of semaphores prevent the Red task to run, effect of priority inversion.

In a priority-based system, high-priority tasks are supposed to run before low-priority tasks. However, if a low-priority task holds a resource (semaphore) needed by a high-priority task, and a medium-priority task then runs and  prevents the low-priority task from finishing, the high-priority  task can be starved of the resource.



## Ejercicio 02

Finally, we will demonstrate in this exercise how to eliminate the problem of priority inversion. The way to do it will be very simple since the Mutex already provides a priority inheritance system.

1. Repeat exercise 2.c). Draw the corresponding chronogram and justify that the priority inversion problem has been eliminated.



---

Priority inheritance temporarily raises the priority of the low-priority task to the priority of the high-priority task that is waiting for it. 

With a mutex the red task is running again.

