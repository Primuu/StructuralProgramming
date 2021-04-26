#include <stdio.h>
#include <stdlib.h>

float g(float a, float b)
{
    return a * b;
}

float foo(float(*g)(float a, float b), float x)
{
    return g(x, -x);
}

int main()
{
    printf("%f\n", foo(g, 3));
    printf("%f\n", foo(g, 6));
    return 0;
}
