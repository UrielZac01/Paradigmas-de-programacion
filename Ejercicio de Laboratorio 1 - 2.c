#include <stdlib.h>
#include <stdio.h>

int main()
{
    int multiplicando, multiplicador, producto, sumador;

    printf( "Introduzca un numero multiplicando (Entero positivo): " );
    scanf( "%d", &multiplicando );
    printf( "Introduzca un numero multiplicador (Entero positivo): " );
    scanf( "%d", &multiplicador );

    if ( multiplicador > 0 && multiplicando > 0 )
    {
        producto = 0;
        sumador = 0;

       while (sumador < multiplicador)
        {
           producto += multiplicando;
           sumador ++;
            
        }
        
        printf("\nLa multiplicacion es igual a: %d", producto);
        
    }
    else
        printf( "\nERROR Ambos numeros deben ser mayores que cero.");

    return 0;
}