#include <stdio.h>

int n = 0, i = 0;
float x[100], k  = 0;

int main() 
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%f", &x[i]);
    scanf("%f", &k);

    for(i = 0; i < n; i++)
        x[i] *= k;

    for(i = 0; i < n; i++)
        printf("%.2f ", x[i]);
}
