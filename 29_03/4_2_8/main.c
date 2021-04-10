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

void fooa (unsigned int n, double *tab1, double *tab2, double *tab3)
{
    for (int i = 0; i < 2 * n; i++)
    {
        if(i < n) *(tab3 + i) = *(tab1 + i);
        else *(tab3 + i) = *(tab2 + i - n);

    }
}

void foob (unsigned int n, double *tab1, double *tab2, double *tab3)
{
    int i;
    for (i = 0; i < 2 * n; i +=2)
    {
        *(tab3 + i) = *(tab2 + i / 2);
    }
    for (i = 1; i < 2 * n; i +=2)
    {
        *(tab3 + i) = *(tab1 + i / 2);
    }
}

int main()
{
    unsigned int n = 3;
    double tab1[n];
    double tab2[n];
    double tab3[n * 2];

    values(n, tab1);
    values(n, tab2);

    //fooa(n, tab1, tab2, tab3);
    foob(n, tab1, tab2, tab3);
    tabprint(n * 2, tab3);

    return 0;
}
