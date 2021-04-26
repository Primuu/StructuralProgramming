#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, int *tab1, int *tab2)
{
    int result = *tab1;
    int wsk = 0;
    for (int i = 1; i < 4 * n; i++)
    {
        if(i < 2 * n)
        {
            if(result >= *(tab1 + i))
                {
                    result = *(tab1 + i);
                    wsk = i;
                }
        }
        else
        {
            if(result >= *(tab2 + i - 2 * n))
                {
                    result = *(tab2 + i - 2 * n);
                    wsk = i;
                }
        }
    }
    if (wsk >= 2 * n)
        {
          wsk = wsk - 2 * n;
          return (tab2 + wsk);
        }
    return (tab1 + wsk);
}

int main()
{
    int tab1[4] = {1, 2, 3, 4};
    int tab2[4] = {1, 3, 6, 0};
    int tab3[4] = {100, 15, 13, 11};
    int tab4[4] = {101, 5, 33, 20};

    printf("%p\n", foo(2, tab1, tab2));
    printf("%p\n", foo(2, tab4, tab3));
    return 0;
}
