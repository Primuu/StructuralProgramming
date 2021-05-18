#include <stdio.h>
#include <stdlib.h>

void zeros(int tab[][100], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            *(*(tab + i)+j) = 0;
        }
    }
}

int main()
{
    int n=4;
    int tab[n][100];

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 100; j++)
        {
            *(*(tab + i)+j) = i + j;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("[%d,%d]=%d\n", i, j, *(*(tab + i)+j));
        }
         printf("\n");
    }

    zeros(tab, n);



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("[%d,%d]=%d\n", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }
    return 0;
}
