#include <stdio.h>

int i = 0, j = 0;
int matriz[5][5];
int diagonal[5];

int main()
{
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < 5; i++)
        diagonal[i] = matriz[i][i];

    printf("\nDiagonal principal: ");
    for(i = 0; i < 5; i++)
        printf("%d ", diagonal[i]);
}
