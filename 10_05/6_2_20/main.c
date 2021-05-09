#include <stdio.h>
#include <stdlib.h>

void foo(int** tab1, int** tab2, unsigned int n, unsigned int m)
{
    int i, j, p;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            p = *(*(tab1 + i)+j);
            *(*(tab1 + i)+j) = *(*(tab2 + i)+j);
            *(*(tab2 + i)+j) = p;
        }
    }

}

int main()
{

    int n = 3, m = 3, i, j;

    int** tab1 = (int**) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++)
    {
        *(tab1 + i) = (int*) malloc(sizeof(int) * m);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(*(tab1 + i)+j) = 7;
        }
    }




    int** tab2 = (int**) malloc(sizeof(int*) * n);

    for (i = 0; i < n; i++)
    {
        *(tab2 + i) = (int*) malloc(sizeof(int) * m);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(*(tab2 + i)+j) = 3;
        }
    }



    printf("TAB1:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }

    printf("\nTAB2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab2 + i)+j));
        }
        printf("\n");
    }

    foo(tab1, tab2, n, m);

    printf("\nTAB1(after):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }

    printf("\nTAB2(after):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab2 + i)+j));
        }
        printf("\n");
    }

    return 0;
}
