#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_no (int n)
{
    srand(time(NULL));
    double first, next_value;
    first = (double) rand() / RAND_MAX;
    printf("%lf\n", first);

    for ( int i = 1; i < n; i++)
    {
        next_value = 1 - first * first;
        first = next_value;
        printf("%lf\n", next_value);
    }

   return 0;
}


int main()
{
    int n;

    printf("How much numbers: ");
    scanf("%i", &n);
    printf(random_no(n));


return 0;
}
