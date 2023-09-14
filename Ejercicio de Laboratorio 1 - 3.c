#include <stdlib.h>
#include <stdio.h>

int main()
{
    int NumeroFactorial, total, sumador,iteraciones;

    printf( "Introduzca un numero entero positvo para calcular su factorial: " );
    scanf("%d",&NumeroFactorial);

    if (NumeroFactorial > 0)
    {
        iteraciones = NumeroFactorial - 2;//se le resta 1, que es las veces que se repetira la multiplicacion,
        total = 1;                        //y el otro -1 es porque no es necesario miltiplicar x1.
        sumador= 0;

       while (sumador <= iteraciones)
        {
           total = total * NumeroFactorial;
           NumeroFactorial --;
           sumador +=1;
            
        }
        
        printf("\nEl factorial del numero es igual a: %d", total);
    }
    else
        printf( "\nERROR El numero debe ser mayor a cero");

    return 0;
}
