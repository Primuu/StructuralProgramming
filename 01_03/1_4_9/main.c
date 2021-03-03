#include <stdio.h>
#include <stdlib.h>

int main()
{
     float n, pierwiastek;

    printf("Podaj nieujemna liczbe: ");
    scanf("%f",&n);

    for ( int i = 1; i <= n; i++)
        if ( i * i <= n ) pierwiastek = i;

    printf("Pierwiastek w zak w dol = %f", pierwiastek);


    return 0;
}
