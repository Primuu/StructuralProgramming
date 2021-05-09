#include <stdio.h>
#include <stdlib.h>

// funkcja zwalniajaca dynamiczna dwuwymiarowa
// tablice tablic elementow typu int

void tab_n_m_free(int** tab, unsigned int n, unsigned int m)
{
    for (int i = 0; i < n; i++)
    {
        free(*(tab + i));
    }
    free(tab);
}


int main()
{

    int** tab = (int**) malloc(sizeof(int*) * 2);
    int i, j;
    for (i = 0; i < 2; i++)
    {
        *(tab + i) = (int*) malloc(sizeof(int) * 3);
    }


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

    tab_n_m_free(tab, 2, 3);

    /*
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }
    */


    return 0;
}
