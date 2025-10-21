#include <stdio.h>

int dias = 0; 
float tiempo = 0, hormin = 0;
int main()
{
    printf("Ingrese cuantos dias va a hacer ejercico: ");
    scanf("%d", &dias);

    for(int i = 0; i < dias; i++)
    {
        tiempo = tiempo + 30;
        hormin = tiempo/60;
    }

    printf("En %d dias haras: %.2f horas de ejercico", dias, hormin);
}
