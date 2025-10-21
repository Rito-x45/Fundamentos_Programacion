#include <stdio.h>

int k = 0;
float p = 0, suma = 0;

int main()
{
    printf("Ingrese cuantos productos va a llevar: ");
    scanf("%d", &k);
    printf("Precio del producto: ");
    scanf("%f", &p);

    for(int i = 1; i < k; i++)
    {
        suma = suma +  p;
        printf("por comprar %d le sale en: %.2f\n", i, suma);
    }

    printf("por comprar %d le sale en: %.2f", k, suma);
}
