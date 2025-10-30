#include <stdio.h>

int i = 0, j = 0;
int matriz[5][6];
int ceros = 0, positivos = 0, negativos = 0;

int main()
{
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] == 0)
                ceros++;
            else if(matriz[i][j] > 0)
                positivos++;
            else
                negativos++;
        }
    }

    printf("\nCeros: %d\nPositivos: %d\nNegativos: %d\n", ceros, positivos, negativos);
}
