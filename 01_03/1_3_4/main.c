#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, absa, absb;
    scanf("%i\n%i", &a, &b);

    if ( a < 0) absa = -a;
    else absa = a;

    if ( b < 0) absb = -b;
    else absb = b;

    if(absa >= absb) printf("%i",a);
        else printf("%i",b);
    return 0;
}
