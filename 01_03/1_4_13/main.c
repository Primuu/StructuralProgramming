#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik=1, silnia=1;

    printf("Podaj liczbe:");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++)
    {
        silnia = silnia * i;
        wynik = wynik + silnia;
    }
    printf("\nWynik to %d", wynik);
    return 0;
}
