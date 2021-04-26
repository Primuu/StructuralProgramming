#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if(sqrt(i) * sqrt(i) == i) result += i;
    }
    return result;
}

int main()
{
    printf("%i\n", foo(10));
    return 0;
}
