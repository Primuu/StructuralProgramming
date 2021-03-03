#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, w = 1;

    printf("Podaj liczbe:\n");
    scanf("%i", &a);

    for ( int i = 2 ; i <= a ; i ++ )
    {
        w *= i;
    }
    printf("%d\n", w);
    return 0;
}
