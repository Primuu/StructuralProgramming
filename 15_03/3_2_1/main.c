#include <stdio.h>
#include <stdlib.h>

int foo(int *a, int *b)
{
    if(*a < *b)
    {
        return *a;
    }
    return *b;
}

int foo1(int *a, int *b)
{
    return (*a < *b) ? *a : *b;
}

int main()
{
    int a = 6;
    int b = 10;
    printf("%i\n", foo(&a, &b));
    printf("%d\n", foo1(&a, &b));
    return 0;
}
