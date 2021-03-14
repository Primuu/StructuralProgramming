#include <stdio.h>
#include <stdlib.h>

unsigned int gcd(unsigned int n, unsigned int m) //greatest common divisor
{
    if (n % m == 0) return m;
    else {
            int x = n;
            n = m;
            m = x % m;
            return gcd(n, m);
         }
}

int main()
{
 unsigned int n, m;

    printf("Enter 2 non-negative integers: ");
    scanf("%i\n%i", &n, &m);
    printf("%i",gcd(n, m));

    return 0;
}
