#include <stdio.h>

int i = 0, j = 0;
int matriz[7][7];
int sumaRenglon[7], sumaColumna[7];

int main()
{
    for(i = 0; i < 7; i++)
        for(j = 0; j < 7; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < 7; i++)
    {
        sumaRenglon[i] = 0;
        sumaColumna[i] = 0;
    }

    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 7; j++)
        {
            sumaRenglon[i] += matriz[i][j];
            sumaColumna[j] += matriz[i][j];
        }
    }

    printf("\nSuma de cada renglon:\n");
    for(i = 0; i < 7; i++)
        printf("%d ", sumaRenglon[i]);

    printf("\nSuma de cada columna:\n");
    for(i = 0; i < 7; i++)
        printf("%d ", sumaColumna[i]);
}
