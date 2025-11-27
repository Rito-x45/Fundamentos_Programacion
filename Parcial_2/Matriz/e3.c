#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int diagonal[5];
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101 - 50;
        }
    }
    
    printf("\nIngresa los valores de la matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        diagonal[i] = matriz[i][i];
    }

    printf("\nMatriz ingresada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal:\n");
    for(i = 0; i < 5; i++) {
        printf("%4d ", diagonal[i]);
    }
    printf("\n");
}