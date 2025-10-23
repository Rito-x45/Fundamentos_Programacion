#include <stdio.h>

int opcion = 0, d = 0, i = 0, j = 0;

int main()
{
    printf("1)Circulo\n2)Cuadrado\n3)Triangulo\nIngrese el numero de la figura deseas ver: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingresa el diametro del circulo(*** = 1): ");
        scanf("%d", &d);
        for( i = 0; i <= d; i++)
        {
            for(j = 0; j <= i; j++)
            {
                printf("***");
            }
            printf("\n");
        }
        break;

    case 2:
        printf("Ingresa el lado del cuadrado: ");
        scanf("%d", &d);
        for (int i = 0; i <= d; i++) 
        {
            for (int j = 0; j < d; j++) 
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 3:
    printf("Ingrese la altura del triangulo: ");
        scanf("%d", &d);
        for (int i = 0; i < d; i++) 
        {
            for (int j = 0; j <= i; j++) 
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    
    default:
        printf("Opcion invalida");
        break;
    }
}
