#include <stdio.h>

int n = 0, a[100], i = 0, impares = 0;

int main() 
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Pares: ");
    for(i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
        else
            impares++;
    }

    printf("\nImpares: %d\n", impares);
    return 0;
}
