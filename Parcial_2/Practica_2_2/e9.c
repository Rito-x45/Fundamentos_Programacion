#include <stdio.h>

float n = 0, califi = 0;
double prom = 0;

int main()
{
    printf("cuantas calificaciones evaluara: ");
    scanf("%f", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Ingrese calificacion numero %d: \n", i);
        scanf("%f", &califi);
        prom = califi/i;
        califi = prom;
    }

    printf("el promedio es %f", prom);

    return 0;
}
