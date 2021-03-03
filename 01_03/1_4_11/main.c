#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, lewa=0, lewb=0, lewc=0;
    int i;

    printf("Podaj 4 liczby: ");
    scanf("%f\n%f\n%f\n%f", &a, &b, &c, &d);

    //A

        for ( i = 0; lewa < d; i++ )
        {
            lewa = (abs(a) * i * i) + (b * i) + c;
        }

        if ( i > 0)i--;
        printf("\na) x = %i", i);

    //B

        for ( i = 0; lewb < c; i++ )
        {
            lewb = (5 * i * i) + (a * i) + b;
        }

        if ( i > 0)i -= 2;
        printf("\nb) x = %i", i);
    //C

        for ( i = 0; lewc <= c; i++ )
        {
            lewc = (5 * i * i) + (a * i) + b;
        }

        if ( i > 0)i -= 2;
        printf("\nc) x = %i", i);

    return 0;
}
