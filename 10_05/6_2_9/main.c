#include <stdio.h>
#include <stdlib.h>

void zeros1(int** tab, unsigned int n, unsigned int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(tab + i)+j) = 0;
        }
    }
}

int main()
{
    int n = 4, m = 4;
    int** tab = (int**) malloc(sizeof(int*) * n);
    int i, j;

    for (i = 0; i < n; i++)
    {
        *(tab + i) = (int*) malloc(sizeof(int) * m);
    }



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(*(tab + i)+j) = i + j;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }


    printf("\n");
    zeros1(tab, n, m);



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }
    return 0;
}
