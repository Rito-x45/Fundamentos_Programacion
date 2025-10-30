#include <stdio.h>

int i = 0, j = 0;
int matriz[5][6];
int suma = 0;

int main()
{
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("Ingrese el valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            suma += matriz[i][j];
        }
    }

    printf("\nLa suma total de la matriz es: %d\n", suma);
}
