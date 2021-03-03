#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fib1 = 1, fib2 = 1, x;

    printf("Podaj liczbe calkowita: ");
    scanf("%i",&n);

    for ( int i = 2; i < n; i++)
    {
        x = fib1;
        fib1 = fib2 + fib1;
        fib2 = x;
    }

    printf("Element ciagu Fibonacciego o indeksie %i to %i\n", n, fib1);

    return 0;
}
