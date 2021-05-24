#include <stdio.h>
#include <stdlib.h>

struct Triangle
{
    double a, b, c;
};

void foo(struct Triangle t1, struct Triangle *t2)
{
    *t2 = t1;
}

int main()
{
    struct Triangle t1;
    t1.a = 3;
    t1.b = 4;
    t1.c = 5;

    struct Triangle t2;
    t2.a = 3;
    t2.b = 1;
    t2.c = 5;

    printf("T1 = %f x %f x %f\n", t1.a, t1.b, t1.c);
    printf("T2 = %f x %f x %f\n\n", t2.a, t2.b, t2.c);
    foo(t1, &t2);
    printf("T1 = %f x %f x %f\n", t1.a, t1.b, t1.c);
    printf("T2 = %f x %f x %f\n", t2.a, t2.b, t2.c);

    return 0;
}
