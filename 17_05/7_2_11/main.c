#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int i;
    double d;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane foo()
{
    struct Dane d;
    printf("Integer - 1\nDouble - 0\n");
    scanf("%d", &d.tp);
    if (d.tp == 1)
    {
        printf("Enter integer\n");
        scanf("%d", &d.zaw.i);
    }
    else
    {
        printf("Enter double\n");
        scanf("%lf", &d.zaw.d);
    }
    return d;
}

int main()
{
    struct Dane test;
    test = foo();

    printf("Tp: %d\n", test.tp);
    if (test.tp == 1)
    {
        printf("%d", test.zaw.i);
    }
    else
    {
        printf("%lf", test.zaw.d);
    }
    return 0;
}
