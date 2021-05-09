#include <stdio.h>
#include <stdlib.h>

// funkcja tworzaca dynamiczna trójwymiarow¹
// tablice  elementow typu int
int (** tab_el3_(unsigned int n, unsigned int m, unsigned int o))[]
{
/*
    int **tab = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc (m * sizeof(int [o]));
    }

    return tab;
    */
    //return malloc (n * sizeof(int [m][o]));
}

// funkcja zwalniajaca dynamiczna trójwymiarow¹
// tablice elementow typu int

void tab_el3_free(unsigned int n, unsigned int m, unsigned int o, int tab[][m][o])
{
    free(tab);
}


int main()
{

    int n = 2, m = 3, o = 4;
    int (**tab)[m][o] = tab_el3(n,m,o);
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                *(*(*(tab + i) + j) + k) = i + j + k;
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("[%d,%d,%d]=%d ", i, j, k, *(*(*(tab + i) + j) + k));
            }
            printf("\n");
        }
    }
    return 0;
}
