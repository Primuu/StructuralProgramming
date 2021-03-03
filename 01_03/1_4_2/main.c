#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    printf("Podaj dwie liczby calkowite\n");
    scanf("%i\n%i", &n, &m);

    for ( int i = 1; i <= m ; i += 1)
    {
        int w = n;
        w *= i;
        printf("%i\n", w);
    }
    return 0;
}
