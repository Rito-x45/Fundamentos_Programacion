#include <stdio.h>
int n = 0, k = 0, contador = 0;
int main()
{
    printf("Ingresa el límite n: ");
    scanf("%d", &n);
    printf("Ingresa el múltiplo k: ");
    scanf("%d", &k);

    printf("Múltiplos de %d entre 1 y %d:\n", k, n);

    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\nCantidad de múltiplos: %d\n", contador);
}