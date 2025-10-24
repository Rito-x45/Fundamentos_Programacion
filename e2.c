#include <stdio.h>

int main() 
{
    int g = 0, n = 0, m = 0, i = 0, j = 0, k = 0, l = 0;     
    float cal = 0, promm = 0, proma = 0, promg = 0, promt = 0;
    char alumno[20] = "", grupo[20] = "";

    printf("Cuantos grupos tiene: ");
    scanf("%d", &g);
    printf("Cuantos alumnos por grupo: ");
    scanf("%d", &n);
    printf("Cuantas materias por alumno: ");
    scanf("%d", &m);

    for (i = 1; i <= g; i++) 
    {
        printf("\nIngrese el nombre del grupo %d: ", i);
        scanf("%s", grupo);
        promg = 0;
        for (j = 1; j <= n; j++) 
        {
            printf("\nIngrese el nombre del alumno %d: ", j);
            scanf("%s", alumno);
            proma = 0;

            for (k = 1; k <= m; k++) 
            {
                promm = 0;
                printf("Materia %d:\n", k);

                for (l = 1; l <= 3; l++)   
                {
                    printf("Calificación %d: ", l);
                    scanf("%f", &cal);
                    promm += cal;
                }
                promm = promm / 3;
                printf("Promedio de materia %d: %.2f\n", k, promm);
                proma += promm;
            }
            proma = proma / m;
            printf("Promedio de %s: %.2f\n", alumno, proma);
            promg += proma;
        }
        promg = promg / n;
        printf("\nPromedio del grupo %s: %.2f\n", grupo, promg);
        promt += promg;
    }
    promt = promt / g;
    printf("\nPromedio general de todos los grupos: %.2f\n", promt);

    return 0;
}
