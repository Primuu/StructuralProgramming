#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n < 0) n = -n;

    int f = 1;
    for ( int i = 1; i <= n; i++ )
    {
    f *= i;
    }

 return f;
}


int main() // FACTORIAL
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%i", &n);

    printf("Your factorial = %i", factorial(n));

    return 0;
}
