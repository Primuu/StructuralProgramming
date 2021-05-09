#include <stdio.h>
#include <stdlib.h>

void foo1(int** tab, unsigned int n, unsigned int m)
{
    int i, j, p;

    for (i = 0; i < m; i++)
    {
        p = *(*(tab + n - 1)+i);
        for (j = n - 1; j > 0; j--)
        {
            *(*(tab + j) + i) = *(*(tab + j - 1)+i);
        }
        *(*(tab) + i) = p;
    }

}

//address
void foo2(int** tab, unsigned int n, unsigned int m)
{
    int* p = *(tab + n - 1);
    for (int i = n - 1; i > 0; i--)
    {
        *(tab + i) = *(tab + i - 1);
    }
    *(tab) = p;

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

    foo1(tab1, n, m);
    //foo2(tab1, n, m);

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
