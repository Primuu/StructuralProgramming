#include <stdio.h>
#include <stdlib.h>


int foo (int n)
{
    if (n == 0 || n == 1) return 1;
    return foo(n - 1) + 2 * foo(n - 2) + 3;
}




int main()
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%i", &n);
    printf("%i",foo(n));

    return 0;
}
