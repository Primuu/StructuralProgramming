#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik=1;

    printf("Podaj liczbe calkowiata >2: ");
    scanf("%i",&n);

    if ( n>2 )
    {
      if ( n % 2 == 0 )
      {
          for ( int i = 2; i <= n; i += 2 )
          {
              wynik = wynik * i;
          }
      }
      else
      {
          for ( int i = 2; i < n; i += 2 )
          {
              wynik = wynik * i;
          }
      }


    }
    else printf("Twoja liczba nie spelnia wymagan.");

    printf("\nWynik to %i",wynik);
    return 0;
}
