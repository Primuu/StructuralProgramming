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
    int** tab = (int**) malloc(sizeof(int*) * 1);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        *(tab + i) = (int*) malloc(sizeof(int) * 100);
    }



    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 100; j++)
        {
            *(*(tab + i)+j) = i + j;
        }
    }

    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("[%d,%d]=%d\n", i, j, *(*(tab + i)+j));
        }
    }



    zeros(tab, 1);



    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("[%d,%d]=%d\n", i, j, *(*(tab + i)+j));
        }
    }
    return 0;
}
