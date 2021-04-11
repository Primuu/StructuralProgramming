#include <stdio.h>
#include <stdlib.h>

int* foo (unsigned int n)
{
    int *tab = (int*) malloc(n * sizeof(int));
    return tab;
}


int main()
{
    printf("%p", foo(5));
    return 0;
}
