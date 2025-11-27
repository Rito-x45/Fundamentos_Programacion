#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][6];
    int i = 0, j = 0;
    int ceros = 0, positivos = 0, negativos = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 6; j++) {
            matriz[i][j] = rand();
        }
    }
    
    printf("Ingresa los valores de la matriz 5x6:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] == 0) ceros++;
            else if(matriz[i][j] > 0) positivos++;
            else negativos++;
        }
    }

    printf("\nMatriz final ingresada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 6; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nCantidad de ceros: %d\n", ceros);
    printf("Cantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);

}