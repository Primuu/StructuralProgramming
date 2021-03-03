#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    printf("Podaj dwie liczby calkowite:\n");
    scanf("%i\n%i",&n,&m);

    for ( int i = n; i < m; i += n )
    {
        printf("%d\n", i);
    }




    return 0;
}
