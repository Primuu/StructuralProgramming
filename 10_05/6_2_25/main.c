#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo(int** tab, unsigned int n)
{
    int i, j;
    int** tab_pom = malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        *(tab_pom + i) = malloc(sizeof(int) * n);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(tab_pom + i) + j) = *(*(tab + i) + j);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(tab + i) + j) = *(*(tab_pom + j) + i);
        }
    }

}

int main()
{

    int n = 3, i, j;
    srand(time(NULL));

    int** tab1 = (int**) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++)
    {
        *(tab1 + i) = (int*) malloc(sizeof(int) * n);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(tab1 + i)+j) = (rand()%100);
        }
    }




    printf("TAB:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }

    foo(tab1, n);

    printf("\nTAB(after):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d,%d]=%d ", i, j, *(*(tab1 + i)+j));
        }
        printf("\n");
    }


    return 0;
}
