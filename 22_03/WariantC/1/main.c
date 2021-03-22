#include <stdio.h>
#include <stdlib.h>

double f1(double a)
{
    return a * a * a;
}

double f2(double a)
{
    return  a;
}

double f3(double a)
{
    return  a - 1;
}


int foo(double (*a)(double a), double (*b)(double a), double x)
{
    if (x < 1) return -1;
    for (int i = 1; i <= x; i++)
        {
          if (a(i) != b(i) * b(i) * b(i)) return -1;
        }
    return 1;
}

int main()
{
    printf("%d\n",foo(f1,f2,10));
    printf("%d\n",foo(f2,f3,5));
    return 0;
}
