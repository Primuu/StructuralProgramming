#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;

    printf("Podaj trzy liczby calkowite:\n");
    scanf("%i\n%i\n%i", &n, &m, &k );

    for ( int i = n  ; i < k ; i += n )
    {
        if ( i > m)
        {
            printf("%i\n", i);
        }
    }
    return 0;
}

