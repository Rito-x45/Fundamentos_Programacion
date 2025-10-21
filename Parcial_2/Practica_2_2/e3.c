#include <stdio.h>

float capital = 0, suma = 0, mes = 0, tasa = 0;

int main()
{
    printf("Ingrese cuantos meses va a ahorrar: ");
    scanf("%f", &mes);
    printf("capital: ");
    scanf("%f", &capital);
    printf("tasa en porcentaje (15, 20, etc): ");
    scanf("%f", &tasa);
    tasa = tasa/100;


    for(int i = 1; i <= mes; i++)
    {
        suma = capital * (1+tasa);
        capital = suma;
        printf("mes %d ahorraste: %.2f\n", i, capital);
    }
    printf("Saldo final : %.2f\n", suma);

    
}
