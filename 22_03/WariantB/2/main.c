#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n == 0 || n == 1) return 3;
    if (n % 2 == 0) return foo((n / 2) - 1) + n;
    return 2 * foo(n - 1) - 2 * n;

    return 0;
}

int main()
{
    int n = 19;
    printf("%i\n", foo(n));

    printf("%i\n", foo(9));

    return 0;
}
