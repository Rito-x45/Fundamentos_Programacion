#include <stdio.h>

void simdados(int dado, int sum , int listdad[], int val, int *count);
void simdadosbkt(int dado, int sum , int listdad[], int val, int *count);

int main()
{
    int val = 0, sol = 0, num_dados = 3, count = 1;
    int listdad[num_dados]; 

    printf("Ingresa la suma de los dados: ");
    scanf("%d", &val);

    simdadosbkt(0, 0, listdad, val, &count);
    printf("\n\nTotal de combinaciones encontradas: %d\n", count-1);

    return 0;

}

void simdados(int dado, int sum , int listdad[], int val, int *count)
{
    if(dado == 3)
    {
        printf("\n[%d] convinacion: %d, %d, %d", *count, listdad[0], listdad[2], listdad[3]);
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

void simdadosbkt(int dado, int sum, int listdad[], int val, int *count) 
{
    int num_total_dados = 3;
    int dadosrest = num_total_dados - dado;
    int summax = sum + (dadosrest * 6);


    if (summax < val) 
    {
        return;
    }

    if (dado == num_total_dados) {
        if (sum >= val) {
            printf("\n[%d] combinacion: %d, %d, %d -> Suma: %d", 
                    *count, listdad[0], listdad[1], listdad[2], sum);
            (*count)++; 
        }
        return;
    }

    
    for (int i = 1; i <= 6; i++) {
        listdad[dado] = i; 
        simdadosbkt(dado + 1, sum + i, listdad, val, count); 
       
    }
}
