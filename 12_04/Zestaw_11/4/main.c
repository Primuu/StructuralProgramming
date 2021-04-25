#include <stdio.h>
#include <stdlib.h>

double foo(unsigned int n)
{
    if (n == 0 || n == 1) return 1;
    return foo(n - 2) + 1 / foo(n - 1);
}

int main()
{
    printf("%lf\n", foo(2));
    printf("%lf\n", foo(4));
    return 0;
}
