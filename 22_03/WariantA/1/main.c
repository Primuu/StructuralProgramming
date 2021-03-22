#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b) // PROBLEM Z ZADANIEM
{
    // int temp = a;
    // a = b;
    // b = temp;
}


int main()
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%i\n%i", &a, &b);
    printf("\naddress a: %p\naddress b: %p", &a, &b);
    foo(&a, &b);
    printf("\naddress a: %p\naddress b: %p", &a, &b);
    return 0;
}
