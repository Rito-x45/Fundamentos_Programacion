#include <stdio.h>

int opcion1(int a); 
int opcion2(int a);
int opcion3(int a, int b);
int opcion4(int a, int b);
void opcion5();

int main() 
{
    int opcion = 0;
    int a = 0, b = 0, resultado = 0;

    printf("Selecciona una de las 5 opciones: \n1)Descomponer num y sumar\n2)Cuadrado\n3)...\n4)...\n5)Salir\nOpcion:");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Ingresa el numero que quiers descomponer y sumar: ");
            scanf("%d", &a);
            resultado = opcion1(a);
            printf("Resultado = %d", resultado);
            break;

        case 2:
            printf("Ingresa la altura del cuadrado:");
            scanf("%d", &a);
            resultado = opcion2(a);
            break;

        case 3:
            printf("Ingresa dos numeros: ");
            scanf("%d %d", &a, &b);
            resultado = opcion3(a, b);
            printf("Resultado opcion 3: %d\n", resultado);
            break;

        case 4:
            printf("Ingresa dos numeros: ");
            scanf("%d %d", &a, &b);
            resultado = opcion4(a, b);
            printf("Resultado opcion 4: %d\n", resultado);
            break;

        case 5:
            opcion5();
            break;

        default:
            printf("Opcion invalida\n");
            break;
    }

    return 0;
}

int opcion1(int a) 
{
    int i = 0, suma = 0;
    for(i = 0; i <= a; i++)
    {
        suma += i;
    }

    return suma;
}

int opcion2(int a) 
{
    int i = 0, j = 0;
    for(i = 0; i <a; i++)
    {
        for(j = 0; j <a; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int opcion3(int a, int b) {
    return a - b;
}

int opcion4(int a, int b) {
    return a * b;
}

void opcion5() {
    printf("Saliendo del programa... Adios :)\n");
}
