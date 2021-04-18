#include <stdio.h>
#include <stdlib.h>


int foo (unsigned int n, unsigned int m, unsigned int k)
{
    if ((m % n == 0) && (m % k == 0)) return 2;
    if ((m % n == 0) || (m % k == 0)) return 1;
    return 0;

}

int main()
{
    unsigned int n, m, k;
    n, m, k= 4, 8, 2;

    printf("%i\n", foo(n, m, k));
    return 0;
}
