#include <stdio.h>
#include <stdlib.h>

int sum_tab(int** tab, unsigned int n, unsigned int m)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result += *(*(tab + i)+j);
        }
    }
    return result;
}

int main()
{
    int n = 2, m = 2;
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
            *(*(tab + i)+j) = 2;
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


    printf("\n%d\n", sum_tab(tab, n, m));

    return 0;
}
