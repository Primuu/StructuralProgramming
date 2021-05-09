#include <stdio.h>
#include <stdlib.h>

int foo(int** tab, unsigned int n, unsigned int m)
{
    float avg = 0;
    float avg_max = 0;
    int index = 0;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            avg_max += *(*(tab + i)+j);
        }
        avg_max = avg_max / m;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            avg += *(*(tab + i)+j);
        }
        avg = avg / m;
        if(avg >= avg_max)
        {
            index = i;
            avg_max = avg;
        }
        avg = 0;

    }
    return index;
}

int main()
{
    int n = 4, m = 2;
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

    printf("\n%d\n", foo(tab, n, m));

    return 0;
}
