#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10];
    int i, j, menor;
    
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 101 - 50;
        }
    }
    
    printf("Ingresa los valores de la matriz 10x10:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 10; i++) {
        menor = matriz[i][0];
        for(j = 1; j < 10; j++) {
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        matriz[i][i] = menor;
    }

    printf("\nMatriz resultante (diagonal con el menor de cada renglón):\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}