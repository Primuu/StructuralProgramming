#include <stdio.h>
#include <stdlib.h>

void sortabc(int *a, int *b, int *c)
{
    if(*a < *c)
    {
        int tempa = *a;
        *a = *c;
        *c = tempa;
    }

    if(*a < *b)
    {
        int tempaa = *a;
        *a = *b;
        *b = tempaa;
    }

    if(*b < *c)
    {
        int tempb = *b;
        *b = *c;
        *c = tempb;
    }
}

int main()
{
    int a, b, c;
    printf("Enter 3 integers:\n");
    scanf("%i\n%i\n%i", &a, &b, &c);
    sortabc(&a, &b, &c);
    printf("%i, %i, %i", a, b, c);

    int d = 2;
    int e = 1;
    int f = 3;
    sortabc(&d, &e, &f);
    printf("\n%i, %i, %i", d, e, f);
    return 0;
}
