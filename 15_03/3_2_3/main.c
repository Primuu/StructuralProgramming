#include <stdio.h>
#include <stdlib.h>

void sw_ap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 7;
    printf("a = %d b = %d\n", a, b);
    sw_ap(&a, &b);
    printf("a = %d b = %d", a, b);
    return 0;
}
