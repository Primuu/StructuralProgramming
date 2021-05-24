#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Triangle
{
    double a, b, c;
};

double circuit(struct Triangle t)
{
    return t.a + t.b + t.c;
}

//***************************************************************************

int is_triangle (struct Triangle t)
{
    if((t.a + t.b > t.c) && (t.a + t.c > t.b) && (t.b + t.c > t.a))
    {
     return 1;
    }
    return 0;
}

double area (struct Triangle t)
{
    if((t.a + t.b > t.c) && (t.a + t.c > t.b) && (t.b + t.c > t.a))
    {
        double p = (t.a + t.b + t.c) / 2;
        return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
    }
    return 0;
}

//***************************************************************************

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

    printf("Circuit = %f\n", circuit(t1));
    printf("Circuit = %f\n", circuit(t2));
//***************************************************************************
    if(is_triangle(t1) == 1) printf("t1 is triangle\n");
    else printf("t1 isnt triangle\n");

    printf("Area = %f\n", area(t1));

    if(is_triangle(t2) == 1) printf("t2 is triangle\n");
    else printf("t2 isnt triangle\n");

    printf("Area = %f\n", area(t2));
    return 0;
}
