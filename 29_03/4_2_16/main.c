#include <stdio.h>
#include <stdlib.h>

void foo (double *tab)
{
    free(tab);
}


int main()
{
    double n = 4;
    double *tab;
    tab = (double*) malloc(n * sizeof(*tab));
    foo(tab);
    return 0;
}
