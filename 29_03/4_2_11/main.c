#include <stdio.h>
#include <stdlib.h>

void tabprint (int n, double *tab)
{
    for (int i = 0; i < n; i++)
        {
            printf("%lf\n", *(tab + i));
        }
}

void values (int n, double *tab)
{
    double a = 0;
    for (int i = 0; i < n; i++)
        {
            scanf("%lf", &a);
            *(tab + i) = a;
            a = 0;
        }
}


double foo (unsigned int n, double *tab1, double *tab2)
{
    double wynik = *tab1 * *tab2;
    for (int i = 1; i < n; i++)
    {
        wynik = wynik + *(tab1 + i) **(tab2 + i);
    }
    return wynik;
}

double foo1 (unsigned int n, double tab1[], double tab2[])
{
    double wynik = tab1[0] * tab2[0];
    for (int i = 1; i < n; i++)
    {
        wynik += tab1[i] * tab2[i];
    }
    return wynik;
}

int main()
{
    unsigned int n = 3;
    double tab1[n];
    double tab2[n];

    values(n, tab1);
    values(n, tab2);

    //tabprint(n, tab1);
    //tabprint(n, tab2);

    printf("\n%lf", foo(n, tab1, tab2));
    printf("\n%lf", foo1(n, tab1, tab2));
    return 0;
}
