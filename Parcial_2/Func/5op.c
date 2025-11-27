#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main() 
{
    int opcion = 0;
    float num1 = 0, num2 = 0, resultado = 0;

    do 
    {
        printf("--- MENU ---\n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) 
        {
            case 1:
                printf("Ingresa dos numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = suma(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Ingresa dos numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = resta(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Ingresa dos numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = multiplicacion(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Ingresa dos numeros: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) 
                {
                    resultado = division(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                } 
                else 
                {
                    printf("Error: division entre cero\n");
                }
                break;

            case 5:
                printf("ha salido.\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    } while(opcion != 5);

    return 0;
}

float suma(float a, float b) 
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multiplicacion(float a, float b) 
{
    return a * b;
}

float division(float a, float b) 
{
    return a / b;
}
