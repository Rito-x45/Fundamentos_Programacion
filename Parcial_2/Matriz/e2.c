#include <stdio.h>

int main() {
    int matriz[7][7];
    int sumaFilas[7] = {0};
    int sumaColumnas[7] = {0};
    int i, j;

    printf("Ingresa los valores de la matriz 7x7:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
        }
    }

    printf("\nMatriz ingresada:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma de cada fila:\n");
    for (i = 0; i < 7; i++) {
        printf("Fila %d: %d\n", i + 1, sumaFilas[i]);
    }

    printf("\nSuma de cada columna:\n");
    for (j = 0; j < 7; j++) {
        printf("Columna %d: %d\n", j + 1, sumaColumnas[j]);
    }

    return 0;
}