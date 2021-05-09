#include <stdio.h>
#include <stdlib.h>

// funkcja tworzaca dynamiczna trójwymiarow¹
// tablice tablic tablic elementow typu int
int*** tab_n_m_o(unsigned int n, unsigned int m, unsigned int o)
{
    int ***tab = malloc(sizeof(int**) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(sizeof(int*) * m);

            for (int j = 0; j < m; j++)
            {
                *(*(tab + i) + j) = malloc(sizeof(int) * o);
            }
    }

    return tab;
}

// funkcja zwalnijaca dynamiczna trójwymiarow¹
// tablice tablic tablic elementow typu int
void tab_n_m_o_free(int*** tab, unsigned int n, unsigned int m, unsigned int o)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            free(*(*(tab + i) + j));
        }
        free(*(tab + i));
    }
    free(tab);
}


int main()
{
    int*** tab=tab_n_m_o(2, 3, 4);
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


    tab_n_m_o_free(tab, 2, 3, 4);
    return 0;
}
