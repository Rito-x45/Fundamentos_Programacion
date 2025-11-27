#include <stdio.h>

int main() {
    int matriz[5][6];
    int i = 0, j = 0, suma = 0;

    printf("Ingresa los valores de la matriz 5x6:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            suma += matriz[i][j];
        }
    }

    printf("\nMatriz ingresada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nLa suma de todos los elementos es: %d\n", suma);

}