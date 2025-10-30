#include <stdio.h>

int i = 0, j = 0, menor = 0;
int matriz[10][10];

int main()
{
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < 10; i++)
    {
        menor = matriz[i][0];
        for(j = 1; j < 10; j++)
            if(matriz[i][j] < menor)
                menor = matriz[i][j];

        matriz[i][i] = menor;
    }

    printf("\nMatriz resultante:\n");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}
