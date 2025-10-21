#include <stdio.h>
#include <ctype.h>
#include <string.h>

char text1[30]= " ", inv[30];
int l;

int main()
{
    //printf("Ingresa el texo:");
    strcpy(text1, "Te extranio mucho tqm");

    for(int i = 0; i <= strlen(text1); i++)
    {
        text1[i] = tolower(text1[i]);
    }
    printf("Texto en minusculas: %s\n", text1);

    for(int i = 0; i <= strlen(text1); i++)
    {
        text1[i] = toupper(text1[i]);
    }
    printf("Texto en mayusculas: %s\n", text1);

    for(int i = 0; i <= strlen(text1); i++)
    {
        if(text1[i] == ' ')
        {
            text1[i+1] = toupper(text1[i+1]);
        }
    }
    printf("Texto: %s\n", text1);

    for(int i = 0; i <= strlen(text1); i++)
    {
        if(i%2 == 0)
            text1[i] = toupper(text1[i]);
        else
            text1[i] = tolower(text1[i]);
    }
    printf("Texto intercalado: %s\n", text1);

    for(int i = 0; i <= strlen(text1); i++)
    {
        if(i%2 == 0)
            text1[i] = tolower(text1[i]);
        else
            text1[i] = toupper(text1[i]);
    }
    printf("Texto intercalado: %s\n", text1);

    for(int i = strlen(text1); i >= 0; i--)
    {
        inv[i] = text1[i]; 
        printf("%c", inv[i]);
    }
    
    

}