#include <stdio.h>
#include <stdlib.h>
void tabprint (int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            printf("%i\n", *(tab + i));
        }
}

void values (int n, int *tab)
{
    int a = 0;
    for (int i = 0; i < n; i++)
        {
            scanf("%i", &a);
            *(tab + i) = a;
            a = 0;
        }
}

float foo (unsigned int n,unsigned int *tab)
{
    float multi = 1;
    float exponent = 1 / (float)n;
    float result;
    int i;
    for (i = 0; i < n; i++)
        {
            multi *= *(tab + i);
        }
    result = pow(multi, exponent);
    return result;
}


int main()
{
    unsigned int n = 4;
    unsigned int tab[n];
    values(n, tab);
    tabprint(n, tab);
    printf("%f\n", foo(n, tab));



    return 0;
}
