#include <stdio.h>

float deuda = 0, abono = 0, interes = 0;
int mes = 0;

int main()
{
    printf("Deuda inicial: ");
    scanf("%f", &deuda);
    printf("Interés mensual (porcentaje, ej. 15): ");
    scanf("%f", &interes);
    interes = interes / 100; 
    printf("Abono mensual: ");
    scanf("%f", &abono);

    while(deuda > 0)
    {
        deuda = deuda * (1 + interes);  
        deuda -= abono;                 
        mes++;
        if (deuda < 0) deuda = 0;      
        printf("Mes %d, deuda restante: %.2f\n", mes, deuda);
    }

    printf("\nLa deuda se pagó en %d meses.\n", mes);

    return 0;
}
