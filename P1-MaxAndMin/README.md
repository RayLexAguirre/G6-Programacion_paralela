![Header](../img/udc.png)

# Práctica 1: Programa Máximo y Mínimo con elaboración de gráfica de tiempos de ejecución

> Primera Parcial

- FACULTAD DE TELEMATICA
- INGENIERÍA EN SOFTWARE
- “6ºG”
- PROGRAMACIÓN PARALELA
- CATEDRATICO: JUAN MANUEL RAMÍREZ ALCARAZ
- AGUIRRE ROMERO RAMÓN ALEJANDRO

> Entrega: Viernes 3 de marzo del 2023

## Objetivo

Haz un programa en C que calcule el máximo y mínimo de N números enteros generados aleatoriamente que estén entre 1 y 1000, los números deben ser almacenados en un vector.

El número N debe estar definido al inicio del programa como constante. El programa debe considerar los dos métodos siguientes para encontrar el resultado:

- Algoritmo de ordenación (Puedes utilizar cualquiera, pero por simplificación te recomiendo utilizar el de Burbuja). Al finalizar la ordenación se toma el primero y el último elemento del vector.

- Con variables Máx y Min inicializadas con el primer elemento del vector. Se compara cada elemento con estas variables y si procede, se realiza una sustitución del valor contenido en la variable por el del elemento comparado.

El programa debe medir el tiempo de ejecución de cada método implementado, ojo, solamente desde el inicio y hasta el fin de cada método, no la generación de los números ni la impresión de los resultados.

Ejecuta el programa al menos 10 veces con valores de N= 10000, 20000, 30000, ..., 100000.
