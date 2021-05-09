#include <stdio.h>
#include <stdlib.h>

int** tab_n_n(unsigned int n)
{
    int** tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(sizeof(int) * (i + 1));
    }
    return tab;
}

int main()
{
    int** tab = tab_n_n(5);
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            *(*(tab + i)+j) = i + j;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("[%d,%d]=%d, ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }
    return 0;
}
