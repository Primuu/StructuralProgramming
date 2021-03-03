#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Podaj liczbe:");
    scanf("%i", &n);

    for ( int i = 1; i < n; i++)
    {
        for ( int j = 1; j < n; j++)
        {
            for ( int k = 1; k < n; k++)
                if( i * i + j * j == k * k )
                printf("\nTe liczby spelniaja kryteria: %i %i %i", i, j, k);
        }
    }
    return 0;
}
