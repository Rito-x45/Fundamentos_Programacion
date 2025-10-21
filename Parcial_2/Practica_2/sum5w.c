#include <stdio.h>

int num = 1, suma = 0, t = 5;

int main()
{
    while(t--)
    {
        printf("Ingrsa un numero: ");
        scanf("%d", &num);
        suma = num + suma;
    }

    printf("La suma final es de: %d \n", suma);
}