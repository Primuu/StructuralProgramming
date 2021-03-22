#include <stdio.h>
#include <stdlib.h>

double foo1(int a)
{
    return a + 5;
}


int foo(double(*wsk)(int a), int n)
{
    return (wsk(n));
}

int main()
{
    printf("%i\n", foo(foo1,5));
    return 0;
}
