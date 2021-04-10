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

void fooa (unsigned int n, int *tab)
{
    int i;
    int tab_auxiliary[n];
    for (i = 0; i < n; i++)
    {
        *(tab_auxiliary + i) = *(tab + i);
    }
        for (i = 0; i < n; i++)
    {
        *(tab + i) = *(tab_auxiliary + n - 1 - i);
    }

}

void foob (unsigned int n, int *tab)
{
    int a = *tab;
    for (int i = 0; i < n - 1; i++)
    {
        *(tab + i) = *(tab + i + 1);
    }
    *(tab + n - 1) = a;
}

void fooc (unsigned int n, int *tab)
{
    int a = *(tab + n - 1);
    for (int i = n - 1; i > 0; i--)
    {
        *(tab + i) = *(tab + i - 1);
    }
    *(tab) = a;
}

int max_index (unsigned int n, int *tab)
{
    int maxi = 0;
    for (int i = 1; i < n; i++)
        if (*(tab + i) > *(tab + maxi))
            maxi = i;
    return maxi;
}

int min_index (unsigned int n, int *tab)
{
    int min = 0;
    for (int i = 1; i < n; i++)
        if (*(tab + i) < *(tab + min))
            min = i;
    return min;
}

void food (unsigned int n, int *tab)
{
    int auxiliary, j;
    for (int i = 0; i < n - 1; i++)
    {
        j = max_index(n - i, tab);
        auxiliary = *(tab + n - i - 1);
        *(tab + n - i - 1) = *(tab + j);
        *(tab + j) = auxiliary;
    }
}

void fooe (unsigned int n, int *tab)
{
    int auxiliary, j;
    for (int i = 0; i < n - 1; i++)
    {
        j = min_index(n - i, tab);
        auxiliary = *(tab + n - i - 1);
        *(tab + n - i - 1) = *(tab + j);
        *(tab + j) = auxiliary;
    }
}

int main()
{
    int tab[6] = {1, 2, 3, 4, 5, 6};
    //values(6, tab);

    fooa(6, tab);
    tabprint(6, tab);
    printf("\n");

    int tab1[6] = {1, 2, 3, 4, 5, 6};
    foob(6, tab1);
    tabprint(6, tab1);
    printf("\n");

    int tab2[6] = {1, 2, 3, 4, 5, 6};
    fooc(6, tab2);
    tabprint(6, tab2);
    printf("\n");


    int tab3[6] = {6, 2, 0, 4, 1, 6};
    food(6, tab3);
    tabprint(6, tab3);
    printf("\n");

    int tab4[6] = {6, 2, 0, 4, 1, 6};
    fooe(6, tab4);
    tabprint(6, tab4);
    printf("\n");

    return 0;
}
