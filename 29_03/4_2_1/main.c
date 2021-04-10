#include <stdio.h>
#include <stdlib.h>

void tabprint (unsigned int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            printf("%i\n", *(tab + i));
        }
}

void fooa (unsigned int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            *(tab + i) = 0;
        }
}

void fooa1 (unsigned int n, int tab[])
{
    for (int i = 0; i < n; i++)
        {
            tab[i] = 0;
        }
}

void foob (unsigned int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            *(tab + i) = i;
        }
}

void fooc (unsigned int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            *(tab + i) *= 2;
        }
}

void food (unsigned int n, int *tab)
{
    for (int i = 0; i < n; i++)
        {
            *(tab + i) = abs(*(tab + i));
        }
}

int main()
{
    const unsigned int n = 6;
    int tab[n];
 // tabprint(n, tab);

    fooa(n, tab);
    tabprint(n, tab);

    foob(n, tab);
    tabprint(n, tab);

    fooc(n, tab);
    tabprint(n, tab);

    food(n, tab);
    tabprint(n, tab);

    return 0;
}
