#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);
    if(n < 0) printf("%i",n*-1);
    else printf("%i",n);

    return 0;
}
