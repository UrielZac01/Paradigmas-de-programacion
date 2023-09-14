#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cociente, dividendo, divisor, residuo;

    printf( "Introduzca un numero dividendo (Entero positivo): " );
    scanf( "%d", &dividendo );
    printf( "Introduzca un numero divisor (Entero positivo): " );
    scanf( "%d", &divisor );

    if ( dividendo > 0 && divisor > 0 )
    {
        cociente = 0;
        residuo = dividendo;

        while ( residuo >= divisor )
        {
            residuo -= divisor;
            cociente++;
        }

        printf( "\n%d dividido entre %d = %d ", dividendo, divisor, cociente);
        printf("\nEl residuo es: %d", residuo);
    }
    else
        printf( "\n   ERROR Ambos numeros deben ser mayores que cero.");

    return 0;
}