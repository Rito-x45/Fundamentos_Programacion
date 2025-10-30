#include <stdio.h>

int n = 0, a[100], i = 0, temp = 0;

int main() 
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = a[n-1];
    for(i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];    
    }  
    a[0] = temp;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
