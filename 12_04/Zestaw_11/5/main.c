#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, float *tab1, float *tab2)
{
    for(int i = 0; i < n; i++)
    {
        if((fabs(*(tab1 + i) - *(tab2 +i))) > 0.1) return 0;
    }
    return 1;




}

int main()
{
    float tab1[4] = {1.3, 42.0, 3.1, 5.7};
    float tab2[4] = {1.3, 42.0, 3.1, 5.7};
    float tab3[4] = {1.3, 42.0, 3.21, 5.7};

    printf("%i\n", foo(4, tab1, tab2));
    printf("%i\n", foo(4, tab1, tab3));
    return 0;
}
