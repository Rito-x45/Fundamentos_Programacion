#include <stdio.h>

int dias = 0, ahorro = 0, suma = 0;

int main()
{
    printf("Ingrese cuantos dias va a ahorrar: ");
    scanf("%d", &dias);

    for(int i = 0; i < dias; i++)
    {
        printf("Cuanto ahorro hoy: ");
        scanf("%d", &ahorro);
        suma = suma +  ahorro;
    }

    printf("En %d dias, ahorraste: %d", dias, suma);
}
