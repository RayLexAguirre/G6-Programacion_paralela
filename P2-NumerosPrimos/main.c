#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
// Ramón Alejandro Aguirre Romero - 6°G
#define N 1000 // Definir la constante N
 
// Función que implementa la criba de Eratóstenes donde eliminaremos todos los multiplos de los numeros
int Erastotenes(bool primos[], int n) { // primos guardara los numeros pero tomandolos como false y true 
    int cont = 0; // Inicializar contador en 0
    // Todos los elementos se hacen true 
    for (int i = 2; i <= n; i++) { // Se comienza desde el dos ya que los multiplos de 0 y 1 no dan una respuesta valida
        primos[i] = true; // Todo elemento a true
    }

    // Encontrar los números primos y marcar sus múltiplos como no primos
    for (int i = 2; i <= n; i++) {
        if (primos[i]) { // Si el número i es primo
            cont++; // Aumentar el contador de números primos encontrados
            for (int j = i * i; j <= n; j += i) { //Realza un ciclo para obtener todos los multiplos hasta n
                primos[j] = false; // y los convierte en false
            }
        }
    }

    return cont; // Entrega el numero de primos encontrados
}

int main() {
    bool primos[N]; // declara un vector booleano de un tamaño definido por N
    int PrimTot; // Variable para almacenar el algoritmo
    clock_t inicio, fin; // VAriables de tiempo 
    double cpu_time_used;

    inicio = clock(); // Tiempo de inicio
    PrimTot = Erastotenes(primos, N); // Utiliza la funcion Erastotenes y su resultado la guarda en PrimTot
    fin = clock(); // Tiempo de fin 
    printf("RAAR \n");
    // Proceso para imprimir numeros primos 
    for (int i = 2; i <= N; i++) {
        if (primos[i]) { // si primos i es true entonces
            printf("%d ", i); // Imprimir el número primo
        }
    }
    printf("\n");//salto de linea

    cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC; // Ejecucion del algoritmo en segundos 
    printf("%d números primos encontrados en %f segundos.\n", PrimTot, cpu_time_used);

    return 0;
}