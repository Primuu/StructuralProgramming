#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10;
    int b = 5;
    printf("%d",sum(&a, &b));
    return 0;
}
