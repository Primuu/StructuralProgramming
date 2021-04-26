#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    if (n == 0) return 1;
    if (n == 1 || n == 2) return 2;
    if (n % 3 == 0) return foo(n / 3) + 1;
    if (n % 3 == 1) return foo(((n - 1) / 3) * 2);
    return 3;
}


int main()
{
    printf("%i\n", foo(5));
    printf("%i\n", foo(6));
    return 0;
}
