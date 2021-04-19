#include <stdio.h>
#include <stdlib.h>

int foo (unsigned int n, unsigned int m, unsigned int k)
{
    int result = 0;
    for (int i = 1; i < k; i++)
    {
        if (i * n > m && i * n < k)result += i * n;
    }
    return result;
}


int main()
{
    printf("%i\n", foo(2, 8, 20));
    printf("%i\n", foo(3, 7, 8));
    return 0;
}
