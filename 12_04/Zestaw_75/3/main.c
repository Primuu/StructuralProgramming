#include <stdio.h>
#include <stdlib.h>

double foo1(double a)
{
    return a + 7;
}

double foo2(double b)
{
    return b * 2;
}


int foo(double(*wsk1)(double a), double(*wsk2)(double b), double x)
{
    if (x < 1)return -1;
    for ( int i = 1; i <= x; i++)
    {
        if (wsk1(i) != pow(wsk2(i), 3)) return -1;
    }
    return 1;

}

int main()
{
    printf("%i\n", foo(foo1, foo2, 1));
    printf("%i\n", foo(foo1, foo2, 5));
    return 0;
}
