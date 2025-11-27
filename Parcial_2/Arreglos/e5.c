#include <stdio.h>
#include <stdlib.h>

int n = 0, i = 0, entero = 0, suma = 0;
float x[100];

int main() {
    for(i = 0; i < 100; i++) {
        x[i] = (rand() % 101);
    }

    scanf("%d", &n);
    suma = 0;

    for(i = 0; i < n; i++) 
    {
        scanf("%f", &x[i]);  

        if(x[i] >= 0) 
            entero = (int)(x[i] + 0.5); 
        else
            entero = (int)(x[i] - 0.5);

        printf("%d ", entero);
        suma += entero;
    }

    printf("\nSuma = %d\n", suma);
}
