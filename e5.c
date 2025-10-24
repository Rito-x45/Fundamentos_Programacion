#include <stdio.h>

int d = 0, i = 0, j = 0;

int main()
{
    printf("Ingrese la altura del triangulo: ");
        scanf("%d", &d);
        for (i = 0; i < d; i++) 
        {
            for (j = 0; j <= i; j++) 
            {
                printf("*");
            }
            printf("\n");
        }
}

