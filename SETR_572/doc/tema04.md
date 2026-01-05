# Comunicacion entre tareas

## Sin intercambio de datos

- Banderas de condicion (redundancia)
- Banderas de evento (sincro unilateral)
- Sincro. bilateral con signals

## Intercambio de datos 

- sin sincro: colas y pools
- con sincronizacion: mailbox

## Cuestion C8

Una única bandera de evento:

- Permite implementar una técnica bilateral de sincronización entre tareas sin intercambio de datos. 
- Permite implementar una técnica bilateral de sincronización entre tareas con intercambio de datos. 
- Permite implementar una técnica de intercambio de datos entre tareas sin sincronización.

SOL: Permite implementar una técnica unilateral de sincronización entre tareas sin intercambio de datos.

## Cuestion C9

Un mailbox:

- Es una técnica que permite el intercambio sincronizado de datos entre tareas. 
- Es una técnica de exclusión mutua.
- Es un algoritmo de intercambio de datos entre tareas sin sincronización. 
- Implementa un mecanismo de intercambio de mensajes entre tareas.