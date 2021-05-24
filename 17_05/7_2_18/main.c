#include <stdio.h>
#include <stdlib.h>

union Sup_int
{
    unsigned int i;
    unsigned char t[4];
};

int main()
{
    printf("Hello world!\n");
    return 0;
}
