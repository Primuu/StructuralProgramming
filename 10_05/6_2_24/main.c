#include <stdio.h>
#include <stdlib.h>

void foo(int** tab, unsigned int n, unsigned int m)
{
    int i, j, p;

    for (i = 0; i < n; i++)
    {
        p = *(*(tab + i) + m - 1);
        for (j = m - 1; j > 0; j--)
        {
            *(*(tab + i) + j) = *(*(tab + i) + j - 1);
        }
        *(*(tab + i)) = p;
    }

}

int main()
{

    int n = 3, m = 4, i, j;

    int** tab1 = (int**) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++)
    {
        *(tab1 + i) = (int*) malloc(sizeof(int) * m);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(*(tab1 + i)+j) = j + i;
        }
    }




    printf("TAB:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }

    foo(tab1, n, m);

    printf("\nTAB(after):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }


    return 0;
}
