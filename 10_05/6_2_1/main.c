#include <stdio.h>
#include <stdlib.h>

// funkcja tworzaca dynamiczna dwuwymiarowa
// tablice tablic elementow typu int
int** tab_n_m(unsigned int n, unsigned int m)
{
    int **tab = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(sizeof(int) * m);
    }
    return tab;
}


int main()
{
    int** tab=tab_n_m(2,3);
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(tab + i)+j) = i + j;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }
    return 0;
}
