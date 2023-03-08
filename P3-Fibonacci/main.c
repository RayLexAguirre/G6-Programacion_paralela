#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main(void)
{
  int cont;
  unsigned long long x = 0;
  unsigned long long y = 1;
  unsigned long long z;
  clock_t inicio, fin; // VAriables de tiempo 
  double cpu_time_used;
 
  inicio = clock(); // Tiempo de inicio
  
  for (cont=1;cont<=N;cont++)
  {
      z=x+y;
      printf("%llu // ",z);
      x=y;
      y=z;
  }
  
  fin = clock(); // Tiempo de fin 
  
  cpu_time_used = ((double) (fin - inicio)) / CLOCKS_PER_SEC; // Ejecucion del algoritmo en segundos 
  printf("\n %f segundos.", cpu_time_used);

  
  return 0;
}