#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, p1, p2, suma=0, m;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    for ( i = 2; i < n; i++)
    {
        p1 = n;
        p2 = i;
        while( p1 * p2 != 0)
            if ( p1 < p2 )p2 = p2 % p1;
            else p1 = p1 % p2;
            if (( p1 == 1) || (p2 == 1))
                suma +=i;
    }
    printf("Suma wynosi %d", suma);


    return 0;

}
