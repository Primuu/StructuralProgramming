#include <stdio.h>
#include <stdlib.h>

// funkcja zwalniajaca dynamiczna dwuwymiarowa
// tablice elementow typu int

void tab_el_free(unsigned int n, unsigned int m, int tab[][m])
{
    free(tab);
}

int (* tab_el(unsigned int n, unsigned int m))[]
{
    return malloc (n * sizeof(int[m]));
}


int main()
{

    int n=2, m=3;
    int (*tab)[m] = tab_el(n,m);
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
    tab_el_free(n,m,tab);
    return 0;
}
