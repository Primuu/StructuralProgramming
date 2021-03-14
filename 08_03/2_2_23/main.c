#include <stdio.h>
#include <stdlib.h>

int fibonacci_sequence (int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fibonacci_sequence(n - 1) + fibonacci_sequence(n - 2);

}




int main()
{
    int n;
    printf("Enter integer: ");
    scanf("%i", &n);
    printf("%i", fibonacci_sequence(n));
    return 0;
}
