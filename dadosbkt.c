#include <stdio.h>

void simdados(int dado, int sum , int listdad[], int val, int count);
void simdadosbkt(int d1, int d2, int d3, int val, int count, int *sol);

int main()
{
    int val = 0, sol = 0, num_dados = 3;
    int listdad[num_dados]; 

    printf("Ingresa la suma de los dados: ");
    scanf("%d", &val);

    simdados(0, 0, listdad, val, 1);
    return 0;

}

void simdados(int dado, int sum , int listdad[], int val, int count)
{
    if(dado == 3)
    {
        printf("\n[%d] convinacion: %d, %d, %d", count, listdad[0], listdad[2], listdad[3]);
        count ++;

        if(sum >= val)
        {
            printf("\t es suma");
        }

        return;
    }

    for(int i = 1; i <= 6; i++)
    {
        listdad[dado] = i;
        simdados(dado + 1, sum + i, listdad, val, count);
    }
}

void simdadosbkt(int d1, int d2, int d3, int val, int count, int *sol)
{

}