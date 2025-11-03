#include <stdio.h>
#include <stdlib.h>

int a[100], i = 0, max = 0, min = 0, dif = 0;

int main() 
{
    for(i = 0; i < 100; i++)
    {
        a[i] = rand();
    }

    max = a[0];
    min = a[0];

    for(i = 0; i < 100; i++) 
    {
        if(a[i] > max)  
            max = a[i];
        if(a[i] < min) 
            min = a[i];
    }

    dif = max - min;

    printf("Max = %d\nMin = %d\nDiferencia = %d\n", max, min, dif);
}
