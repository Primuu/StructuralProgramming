#include <stdio.h>
#include <stdlib.h>

int foo1(int a)
{
    return a + 1;
}

int foo2(int a)
{
    return 2 * a + 1;
}

int foo(int (*a)(int b), int (*c)(int d), unsigned int n)
{
    for (int i = 0; i <= n; i++)
    {
        if(a(i) != c(i))
            return 0;
    }
    return 1;
}


int main()
{
    printf("%i\n", foo(foo1, foo2, 0));
    printf("%i\n", foo(foo1, foo2, 9));
    return 0;
}
