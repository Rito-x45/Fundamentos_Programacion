#include <stdio.h>

int num = 1, suma = 0, t = 0;

int main()
{
    for(t=5; t>0; t--)
    {
        printf("Ingrsa un numero: ");
        scanf("%d", &num);
        suma = num + suma;
    }

    printf("La suma final es de: %d \n", suma);
}