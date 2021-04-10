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

float foo (unsigned int n, const int *tab)
{
    float result = 0;
    for (int i = 0; i < n; i++)
        {
            result += *(tab + i);
        }
    return result / n;
}

int main()
{
    unsigned int n = 5;
    const int tab[n];
    values(n, tab);
    tabprint(n, tab);
    printf("%f\n", foo(n, tab));


    return 0;
}
