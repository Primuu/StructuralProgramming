#include <stdio.h>
#include <stdlib.h>


void no_of_calls()
{
    static int i = 0;
    i++;
    if (i == 1)printf("Function was called %i time.\n", i);
    else printf("Function was called %i times.\n", i);
}


int main()
{
    no_of_calls();
    no_of_calls();
    no_of_calls();
    no_of_calls();
    no_of_calls();

    return 0;
}
