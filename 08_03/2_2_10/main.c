#include <stdio.h>
#include <stdlib.h>

int rpn(int n, int m) //relatively prime number
{
    int x = n;
    while (n != m)
        if (n > m)
            n -= m;
        else
            m -= n;

  if (n == 1)  return x;
  return 0;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += rpn(i, n);
    }
 return sum;
}



int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%i", &n);

    printf("Sum = %i", sum(n));
}
