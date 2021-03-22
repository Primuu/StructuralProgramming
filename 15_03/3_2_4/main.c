#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b)
{
    if(*a > *b)
    {
     int temp = *a;
     *a = *b;
     *b = temp;
    }
}



int main()
{
    int a = 5;
    int b = 9;
    printf("a = %d b = %d\n", a, b);
    foo(&a, &b);
    printf("a = %d b = %d\n", a, b);
    foo(&b, &a);
    printf("a = %d b = %d\n", a, b);
    return 0;
}
