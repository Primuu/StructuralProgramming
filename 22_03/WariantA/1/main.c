#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}


int main()
{
    int a, b;
    printf("Enter 2 integers:\n");
    scanf("%i\n%i", &a, &b);
    printf("\nvalue a: %i value b: %i", a, b);
    foo(&a, &b);
    printf("\nvalue a: %i value b: %i\n", a, b);
    return 0;
}
