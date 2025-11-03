#include <stdio.h>

int n = 0, a[100], i = 0, impares = 0, j = 0;

int main() 
{
    for(i = 0, j = 1; i <= 100; i++, j ++)
    {
        a[i] = j;
        if (j % 2 == 0)
            printf("Par : %d\n", j);
        else 
            impares ++;
    }
}
