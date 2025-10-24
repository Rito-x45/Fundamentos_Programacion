#include <stdio.h>

int i = 0, j = 0, totala = 40, totalm = 5, pasan = 0, reprueban = 0;
float cal = 0, prom = 0;

int main() 
{
    for (i = 1; i <= totala; i++) 
    {
        prom = 0;
        printf("\nAlumno %d:\n", i);

        for (j = 1; j <= totalm; j++) 
        {
            printf("  Calificación de materia %d: ", j);
            scanf("%f", &cal);
            prom += cal;
        }

        prom = prom / totalm;

        if (prom >= 6.0) 
        {
            pasan++;
        } 
        else 
        {
            reprueban++;
        }
    }


    printf("Aprobados: %d\n", pasan);
    printf("Reprobados (para hacer examen de nivelación): %d\n", reprueban);

    return 0;
}
