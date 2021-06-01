#include <stdio.h>
#include <stdlib.h>

int (* tab_el(unsigned int n, unsigned int m))[]
{
    return malloc (n * sizeof(int[m]));
}


int** tab_n_m(unsigned int n, unsigned int m)
{
    int **tab = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(sizeof(int) * m);
    }
    return tab;
}

float fun(int **tab, int tab2[][5])
{
    float a = **tab + **tab2 + 0.5;
    return a;
}


int main()
{
    int n = 5, m = 5, i = 0, j = 0;
    int (*tab)[m] = tab_el(n,m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            *(*(tab+i)+j)=i + j + 3;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab+i)+j));
        }
        printf("\n");
    }

    printf("\n\n\n\n\n\n");

    int** tab1=tab_n_m(2,3);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(tab1 + i)+j) = i + j + 6;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }

    printf("\n\n\n");
    printf("%f\n", fun(tab1, tab));
    return 0;
}
