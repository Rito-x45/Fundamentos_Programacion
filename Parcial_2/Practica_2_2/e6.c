#include <stdio.h>

int dias = 0;
float litros = 0, suma = 0;

int main()
{
    printf("Ingrese cuantos dias lleva bebiendo los mismos litrso de agua: ");
    scanf("%d", &dias);
    printf("Cuanto listros bebes diarios: ");
    scanf("%f", &litros);

    for(int i = 0; i < dias; i++)
    {  
        suma = suma +  litros;
    }

    printf("En %d dias tomaste: %.2f litros de agua", dias, suma);
}
