#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double a, b, c;
} trojkat;

double obwod(trojkat t)
{
    return t.a+t.b+t.c;
}

int main()
{
    trojkat t1;
    t1.a =3;
    t1.b =4;
    t1.c =5;
    printf("Obwod: %f\n", obwod(t1));
    return 0;
}
