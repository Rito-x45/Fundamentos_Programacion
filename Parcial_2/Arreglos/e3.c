#include <stdio.h>

int a[100], n = 0, i = 0, temp = 0;

int main() 
{
    printf("Ingresa el numero de elementos (max 100): ");
    scanf("%d", &n);

    // Leer elementos
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Guardar el último
    temp = a[n-1];

    // Desplazar de derecha a izquierda
    for(i = n-1; i > 0; i--) {
        a[i] = a[i-1];
    }

    // Colocar el último en la posición 0
    a[0] = temp;

    // Mostrar resultado
    printf("\nArreglo desplazado:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

