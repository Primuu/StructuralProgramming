#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n >= 0 && n <= 10000)
    {
        int sum=0;
        do
        {
            sum += n % 10;
            n /= 10;
        }while(n != 0);
        return sum;
    }
    return -1;
}
int main()
{
    printf("%i", foo(1234));
    return 0;
}
