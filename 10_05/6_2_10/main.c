#include <stdio.h>
#include <stdlib.h>

void zeros2(unsigned int n, unsigned int m, int tab[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(tab + i)+j) = 0;
        }
    }
}

int (* tab_el(unsigned int n, unsigned int m))[]
{
    return malloc (n * sizeof(int[m]));
}

int main()
{
    int n = 4, m = 4;
    int (*tab)[m] = tab_el(n,m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            *(*(tab+i)+j)=i + j;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab+i)+j));
        }
        printf("\n");
    }

    printf("\n");
    zeros2(n, m, tab);



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab+i)+j));
        }
        printf("\n");
    }
    return 0;
}
