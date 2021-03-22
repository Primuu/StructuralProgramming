#include <stdio.h>
#include <stdlib.h>

void change(int n, int *w)
{
    *w = n;
}

int main()
{
    int a = 10;
    int b = 5;
    printf("a = %d b = %d\n",a, b);
    change(a, &b);
    printf("a = %d b = %d\n",a, b);

    return 0;
}
