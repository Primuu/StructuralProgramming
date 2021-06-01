#include <stdio.h>
#include <stdlib.h>

int foo(int** tab, unsigned int n, unsigned int m)
{
    if(m - 1 >= 2)
    {
        return *(*(tab + n - 1) + 2);
    }
    return NULL;
}

int main()
{
    int n = 4, m = 3;
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
            *(*(tab + i)+j) = i + j - (i * 2);
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

    printf("%d\n", foo(tab, n, m));

    return 0;
}
