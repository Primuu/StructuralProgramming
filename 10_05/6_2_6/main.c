#include <stdio.h>
#include <stdlib.h>

// funkcja tworzaca dynamiczna trojwymiarowa
// tablice  elementow typu int
int (** tab_el3(unsigned int n, unsigned int m, unsigned int o))[]
{
    return malloc (n * sizeof(int[m][o]));
}

// funkcja zwalniajaca dynamiczna trojwymiarowa
// tablice elementow typu int

void tab_el3_free(unsigned int n, unsigned int m, unsigned int o, int tab[][m][o])
{
    free(tab);
}

int main()
{
    int n = 2, m = 3, o = 4;
    int (**tab)[4] = tab_el3(n,m,o);
    int i, j, k;
/*
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < o; k++)
            {
                //*(*(*(tab + i) + j) + k) = i + j + k;
                printf("[%d, %d, %d] = ", i, j, k);
                scanf("%d", &tab[i][j][k]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < o; k++)
            {
                printf("[%d, %d, %d] = %d\n", i, j, k, tab[i][j][k]);
            }
        }
    }
*/


    tab_el3_free(n, m, o, tab);
    return 0;
}
