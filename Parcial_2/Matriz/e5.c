#include <stdio.h>

int i = 0, j = 0, k = 0;
int matriz[6][8];
int vector[48];

int main()
{
    for(i = 0; i < 6; i++)
        for(j = 0; j < 8; j++)
            scanf("%d", &matriz[i][j]);

    k = 0;
    for(i = 0; i < 6; i++)
        for(j = 0; j < 8; j++)
            vector[k++] = matriz[i][j];

    printf("\nVector resultante:\n");
    for(i = 0; i < 48; i++)
        printf("%d ", vector[i]);
}
