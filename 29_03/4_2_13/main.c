#include <stdio.h>
#include <stdlib.h>

int foo (unsigned int n) // Czy jest to poprawne rozwi¹zanie?
{
    int *tab;
    return tab = (int*) malloc(n * sizeof(*tab));
}


int main()
{
    printf("%p", foo(5));
    return 0;
}
