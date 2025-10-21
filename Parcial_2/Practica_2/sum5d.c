#include <stdio.h>

int num = 1, suma = 0, t = 5;

int main()
{
    do
    {
        printf("Ingrsa un numero: ");
        scanf("%d", &num);
        suma = num + suma;
        t--;
    } while (t>0);

    printf("La suma final es de: %d \n", suma);
}