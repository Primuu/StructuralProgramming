#include <stdio.h>
#include <stdlib.h>

int n_to_m(int n, int m)
{
 int result = 1;
 n = (n < 0) ? -n : n;
 m = (m < 0) ? -m : m;

    if (n != 0 || m != 0)
    {
        for ( int i = 1; i <= m; i++ )
        {
            result *= n;
        }return result;
    }


 return 0;
}


int main()
{
    int n, m;
    printf("Enter 2 non-negative integers: ");
    scanf("%i\n%i", &n, &m);

    printf("Your n to m  = %i", n_to_m(n, m));

    return 0;
}
