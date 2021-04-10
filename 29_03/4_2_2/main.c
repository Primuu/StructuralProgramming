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
float fooa (int n, int *tab)
{
    float result = 0;
    for (int i = 0; i < n; i++)
        {
            result += *(tab + i);
        }
    return result / n;
}

float fooa1 (int n, int tab[])
{
    float result = 0;
    for (int i = 0; i < n; i++)
        {
            result += tab[i];
        }
    return result / n;
}

int foob (int n, int *tab)
{
    int suma;
    for (int i = 0; i < n; i++)
        {
            suma += *(tab + i);
        }
    return suma;
}

int fooc (int n, int *tab)
{
    int suma;
    for (int i = 0; i < n; i++)
        {
            suma += *(tab + i)**(tab + i);
        }
    return suma;
}


int main()
{
    const int n = 5;
    int tab[n];
    values(n, tab);
    tabprint(n, tab);
    printf("%f\n", fooa(n, tab));
    printf("%i\n", foob(n, tab));
    printf("%i\n", fooc(n, tab));


    return 0;
}
