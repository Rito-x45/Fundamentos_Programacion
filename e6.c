#include <stdio.h>

int d = 0, i = 0, j = 0;

int main()
{
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &d);

    printf("A)\n");
    for (i = 0; i < d; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("B)\n");
    for (i = d; i > 0; i--) 
    {
        for (j = 0; j < i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("C)\n");
    for (i = 0; i < d; i++) 
    {
        for (j = i; j < d - 1; j++) 
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("D)\n");
    for (i = d; i > 0; i--) 
    {
        for (j = d; j > i; j--) 
        {
            printf(" ");
        }
        for (j = 0; j < i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
