#include <stdio.h>
#include <stdlib.h>

int n = 0, i = 0;
char c[100];

int main() 
{

    for(i = 0; i < 100; i++)
        c[i] = (rand() % 26) + 'a';

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf(" %c", &c[i]);

    for(i = n-1; i >= 0; i--)
        printf("%c", c[i]);
}
