#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n == 0 || n == 1) return 3;
    if (n % 2 == 0) return foo((n / 2) - 1) + n / 2;
    return 2 * foo(n - 1) - (n - 1);

    return 0;
}

int main()
{
    int n = 0;
    printf("%i\n", foo(n));

    printf("%i\n", foo(1));
    printf("%i\n", foo(2));
    printf("%i\n", foo(3));
    printf("%i\n", foo(4));
    printf("%i\n", foo(5));
    printf("%i\n", foo(6));

    return 0;
}
