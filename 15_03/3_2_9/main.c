#include <stdio.h>
#include <stdlib.h>

int* foo()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%p\n", foo());
    return 0;
}
