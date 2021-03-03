#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;

    printf("Podaj wspolczynniki rownania kwadratowego:\n");
    scanf("%f\n%f\n%f",&a,&b,&c);

    delta = b * b - 4 * a * c;
    if(a != 0){
                if(delta > 0){
                    x1 = (-1 * b - sqrt(delta)) / 2 * a;
                    x2 = (-1 * b + sqrt(delta)) / 2 * a;
                    printf("x1 = %f\nx2 = %f",x1,x2);
                    } else if (delta == 0)
                        {
                            x1 = -1 * b / 2 * a;
                            printf("x1 = %f\n",x1);
                        } else printf("Nie ma rozwiazan");
    } else printf("To nie jest rownanie kwadratowe");


    return 0;
}
