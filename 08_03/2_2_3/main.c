#include <stdio.h>
#include <stdlib.h>

int greatest_divisor (int n)
{
    if (n > 2)
    {
        int k;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) k = i;
        return k;
    }
    return -1;
}


int main()
{
    int n;
    printf("Enter non-negative integer: ");
    scanf("%i", &n);
    printf("%i", greatest_divisor(n));

    return 0;
}
