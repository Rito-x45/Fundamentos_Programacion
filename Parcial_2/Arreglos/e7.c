#include <stdio.h>

int n = 0, i = 0, vocales = 0;
char c[100];

int main() 
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %c", &c[i]);
    }

    for(i = 0; i < n; i++) 
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'|| c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
            vocales++;
    }

    printf("Vocales = %d\n", vocales);
}
