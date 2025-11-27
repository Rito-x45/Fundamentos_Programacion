#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[6][8];
    int vector[48];
    int i, j, k = 0;
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 8; j++) {
            matriz[i][j] = rand();
        }
    }
    
    printf("Ingresa los valores de la matriz 6x8:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 8; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            vector[k++] = matriz[i][j];
        }
    }

    printf("\nMatriz final ingresada:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 8; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVector con todos los elementos de la matriz:\n");
    for(k = 0; k < 48; k++) {
        printf("%4d ", vector[k]);
        if((k+1) % 12 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}