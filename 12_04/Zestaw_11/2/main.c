#include <stdio.h>
#include <stdlib.h>

int foo (unsigned int n)
{
    int result = 0;
    for(int i = 1; i < n; i += 2)result += i;
    return result;
}

int main()
{
    printf("%i\n", foo(5));
    printf("%i\n", foo(12));
    return 0;
}
