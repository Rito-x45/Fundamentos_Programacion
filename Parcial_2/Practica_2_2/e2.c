#include <stdio.h>

int dias = 0, ahorro = 0, suma = 0;

int main()
{
    printf("Ingrese cuantos dias va a ahorrar: ");
    scanf("%d", &dias);
    printf("Ahorro: ");
    scanf("%d", &ahorro);

    for(int i = 1, j = 0; i <= dias; i++, j++)
    {
        suma = (j * ahorro) + ahorro;
        printf("El %d dia, ahorraste: %d\n", i, suma);
    }

    
}
