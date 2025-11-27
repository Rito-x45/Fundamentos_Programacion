#include <stdio.h>
#include <stdlib.h>

int n = 0, i = 0, contador = 0;
float x[100], promedio = 0;

int main() 
{
    for(i = 0; i < 100; i++) {
        x[i] = rand();  
    }

    scanf("%d", &n);

    promedio = 0;
    contador = 0;

    for(i = 0; i < n; i++) {
        scanf("%f", &x[i]);   
        promedio += x[i];
    }

    promedio /= n;
    
    for(i = 0; i < n; i++) {
        if (x[i] > promedio)
            contador++;
    }

    printf("Promedio = %.2f\nMayores al promedio = %d\n", promedio, contador);
}
