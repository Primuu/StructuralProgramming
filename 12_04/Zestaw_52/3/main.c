#include <stdio.h>
#include <stdlib.h>

double* foo()
{
    double *a = malloc(2 * sizeof(double));
    *a = 5.2;
    *(a + 1) = -4.2;
    return a;
}


int main()
{
    foo();
    printf("%lf\n", *(foo()));
    printf("%lf\n", *(foo() + 1 ));
    return 0;
}
