#include <stdio.h>
#include <stdlib.h>

void values (int n, int *tab)
{
    int a = 0;
    for (int i = 0; i < n; i++)
        {
            scanf("%i", &a);
            *(tab + i) = a;
            a = 0;
        }
}

int* foo(unsigned int n, int *tab1, int *tab2)
{
    int i, pom, j;
    int *tab = (int*) malloc(2 * n * sizeof(int));
    for (i = 0; i < 2 * n; i++)
    {
        if (i < n) *(tab + i) = *(tab1 + i);
        else *(tab + i) = *(tab2 + i - n);
    }

   for (i = 0; i < 2 * n - 1; i++)
       for (j = 0; j < 2 * n - i - 1; j++)
           if (*(tab + j) < *(tab + j + 1))
           {
               pom = *(tab + j);
               *(tab + j) = *(tab + j + 1);
               *(tab + j + 1) = pom;
           }

/*
    for (int i = 0; i < 2 * n; i++)
        {
            printf("%i\n", *(tab + i));
        }
*/

    return tab;
}


int main()
{

    const unsigned int n = 4;
    int tab1[n];
    int tab2[n];

    values(n, tab1);
    values(n, tab2);
    foo(n, tab1, tab2);


    printf("Hello world!\n");
    return 0;
}
