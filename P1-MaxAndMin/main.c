//Librerias que se requieren para la ejecución
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000 // Número de elementos del vector

// Función en la cual se generaran numeros aleatorios del 0 al 1000
int ganerate_random_x_1000() {
    return rand() % 1000 + 1;
}

// Función del algoritmo de burbuja en la cual ordena los elementos del vectos
void bubble_algor(int32_t vector[], int32_t n) { //Se establece como variable int32_t para evitar desperdiciar espacio en memoria
    int32_t i, j; //Se establecen las variables que se estaran intercambiando
    for (i = 0; i < n - 1; i++) { //Ciclo para estar recorriendo el vector
        for (j = 0; j < n - i - 1; j++) { 
            if (vector[j] > vector[j + 1]) { //Se revisa si el numero que sigue es menor al que se tiene
                int32_t temp = vector[j]; // Si es True entonces se intercambiaran los datos
                vector[j] = vector[j + 1];
                vector[j + 1] = temp; //Se repite el proceso hasta terminar de acomodar el vector
            }
        }
    }
}

// Función principal
int main() {
    int32_t numbers[N]; //Se establece un vector y su tamaño en base a N
    int32_t i, max, min; // Se establecen las variables para el ciclo, el maximo y el minimo
    clock_t start, end; // Variable para la medición de tiempo de inicio y fin 
    double bubble_time, minmax_time; // Se establece la variable double para mayor presición que float

    // Generar números para su almacenamiento dentro del vector
    srand(time(NULL)); // Semilla la cual definira cual punto de elementos tomara para tener un estandar de tiempo
    for (i = 0; i < N; i++) { //Ciclo en el cual obtiene todos los elementos del vector
        numbers[i] = ganerate_random_x_1000();
    }

    // Algoritmo de ordenamiento 
    start = clock(); // Medición de tiempo de inicio
    bubble_algor(numbers, N); //Ejecuta el Algoritmo de burbuja entregando el vector y la N 
    max = numbers[N - 1]; // Se establece que el maximo es el ultimo numero del vector ordenado
    min = numbers[0]; //Se establece que el minimo es el primer elemento del vector ordenado 
    end = clock(); // Se mide el tiempo en el que finalizo 
    bubble_time = (double)(end - start) / CLOCKS_PER_SEC; //Se calcula el tiempo de ejecucion del algoritmo en base al inicio y final en segundos

    // Método con variables Max y Min
    start = clock(); // tiempo de inicio
    max = min = numbers[0]; // Se establece igualdad entre max, min y el vector
    for (i = 1; i < N; i++) { // Se crea un ciclo desde el uno hasta la N
        if (numbers[i] > max) { //Este se encargara de observar si el numero del array es mayor que maximo
            max = numbers[i]; //si es true entonces se establece max como el numero mayor
        }
        if (numbers[i] < min) { //Se observa se el numero es menor que minimo 
            min = numbers[i]; //Se establece min como el mas pequeño
        }
    }
    end = clock(); // tiempo de fin
    minmax_time = (double)(end - start) / CLOCKS_PER_SEC; //Se calcula el tiempo del algoritmo

    // Resultados
    printf("RAAR \n");
    printf("N = %d\n", N); //el valor definido por N
    printf("Max = %d\n", max); // el valor maximo obtenido 
    printf("Min = %d\n", min); // el valor minimo obtenido
    printf("Time with Bubble algorithm = %f seconds\n", bubble_time);
    printf("Time with variables Max & Min = %f seconds\n", minmax_time);

    return 0; //Se necesita regresar un valor por lo que se regresa cero ya que no afecta 
}
