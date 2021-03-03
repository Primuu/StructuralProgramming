#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik=0;

    printf("Podaj liczbe calkowita: ");
    scanf("%i",&n);

    for ( int i = 0 ; i <= n ; i++ )
    {
        wynik = wynik + i * i;
    }
    printf("\nWynik to %d",wynik);

    return 0;
}
