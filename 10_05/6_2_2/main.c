#include <stdio.h>
#include <stdlib.h>

// funkcja tworzaca dynamiczna dwuwymiarowa
// tablice elementow typu int
int (* tab_el(unsigned int n, unsigned int m))[]
{
    return malloc (n * sizeof(int[m]));
}


int main()
{
    int n = 2, m = 3;
    int (*tab)[m] = tab_el(n,m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            *(*(tab+i)+j)=i + j;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab+i)+j));
        }
        printf("\n");
    }
    return 0;
}
