#include <stdio.h>

int i = 0, j = 0, n = 0;
int main() {

    printf("Cuantos numeros desea ver: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d\t", j);
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}
