#include <stdio.h>
#include <stdlib.h>

int foo (unsigned int n)
{
    if (n == 0 || n == 1) return 1;
    if (n > 0)
    {
        if (n % 3 == 0) return foo((n / 3) - 1);
        if (n % 3 == 1) return foo(n - 1) + 1;
    }
    return 5;
}

int main()
{
    printf("%i\n", foo(2));
    printf("%i\n", foo(3));

    return 0;
}
