#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, int *tab1, int *tab2)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(tab1 + i ) == *(tab2 + i)) result++;
    }
    return result;
}

int main()
{

    int tab1[5] = {2, 4, -2, 3, 5};
    int tab2[5] = {2, 0, -2, 3, 1};

    printf("%i\n", foo(5, tab1, tab2));
    return 0;
}
