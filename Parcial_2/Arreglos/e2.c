#include <stdio.h>

int n = 0, a[100], i = 0, max = 0, min = 0;

int main() 
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 1; i < n; i++) 
    {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("Max = %d\nMin = %d\nDiferencia = %d\n", max, min, max - min);
}
