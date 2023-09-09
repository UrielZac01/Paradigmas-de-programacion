#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int array[5];
   int suma=0;
   
   //Generar números aleatorios en el arreglo
   srand(time(NULL));
   for(int i=0;i<5;i++){
   array[i] = rand()%100; 
   }
   //Para imprimir el arreglo
   for(int i=0;i<5;i++){
   printf("%d \t",array[i]); 
   }
   //Sumar los números del arreglo
   
   for(int i=0;i<5;i++){
   suma += array[i];
   }
   
   printf("\nLa suma es: %d",suma);
    return 0;
}