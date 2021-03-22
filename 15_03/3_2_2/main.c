#include <stdio.h>
#include <stdlib.h>

int foo(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

int main()
{
    int a = 6;
    int b = 10;
    printf("%d\n", foo(&a, &b));
    return 0;
}
