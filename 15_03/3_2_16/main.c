#include <stdio.h>
#include <stdlib.h>

void foo(const int * a, int * const b)
{
    *b = *a;
}

int main()
{
    int a = 2;
    int b = 7;
    printf("a = %d b = %d\n", a, b);
    foo(&a, &b);
    printf("a = %d b = %d", a, b);
    return 0;
}
