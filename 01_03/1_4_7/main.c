#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, wynik = 1;

    printf("Podaj dwie liczby calkowite (pierwsza<druga): ");
    scanf("%i\n%i", &n, &m);

    for ( int i = n; i <= m; i++ )
    {
        wynik *= i;
    }

    printf("\nWynik to: %i", wynik);

    return 0;
}
