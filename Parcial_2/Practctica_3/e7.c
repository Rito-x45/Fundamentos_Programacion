#include <stdio.h>

int n = 0, i = 0, j = 0;
float sueldo  = 0, venta = 0, comision = 0, total = 0;

int main() 
{
    printf("Ingrese el numero de vendedores: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        printf("\n--- Vendedor %d ---\n", i);
        printf("Ingrese el sueldo base: ");
        scanf("%f", &sueldo);

        comision = 0;

        for(j = 1; j <= 3; j++) 
        {
            printf("Ingrese el monto de la venta %d: ", j);
            scanf("%f", &venta);
            comision += venta * 0.10; 
        }

        total = sueldo + comision;

        printf("Comision total de la semana: %.2f\n", comision);
        printf("Pago total (sueldo base + comisiones): %.2f\n", total);
    }
}