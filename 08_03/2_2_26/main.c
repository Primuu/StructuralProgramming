#include <stdio.h>
#include <stdlib.h>


unsigned int foo1(unsigned int n)
{
    if (n == 0 || n == 1 || n == 2) return 1;
        else if (n % 3 == 0) return foo1(n - 1) + foo1(n -2);
            else if (n % 3 == 1) return 5 * foo1(n - 1) + 4;
                return foo1(n - 1);

}


int main()
{

    unsigned int n;

    printf("Enter a non-negative integer: ");
    scanf("%i", &n);
    printf("%i",foo1(n));

    return 0;

}
