#include <stdio.h>
#include <stdlib.h>

int main()
{
    char z;
    double a,b,w;

    printf("Podaj znak dzialania\n");
    scanf("%c",&z);
    if(z == '+' || z == '-' || z == '*' || z == '/')
    {
        printf("\nPodaj liczby:\n");
        scanf("%lf\n%lf",&a,&b);
    }

    if(z == '+')
    {
        w = a + b;
        printf("Wynik dodawania to %lf\n",w);
    }
    else if(z == '-')
    {
        w = a - b;
        printf("Wynik odejmowania to %lf\n",w);
    }
    else if(z == '*')
    {
        w = a * b;
        printf("Wynik mnozenia to %lf\n",w);
    }
    else if(z == '/')
    {
        w = a / b;
        printf("Wynik dzielenia to %lf\n",w);
    }
    else printf("\nNie znam tego znaku.\n");



    return 0;
}
