#include <stdio.h>
#include <stdlib.h>

int foo (unsigned int n)
{
    if (n == 0) return 1;
    if (n == 1) return 2;

    if (n % 2 == 0) return foo(n - 2) + n;
    return foo(n - 2) * n;

}



int main()
{
    printf("%i\n", foo(5));
    printf("%i\n", foo(0));
    return 0;
}
