#include <stdio.h>
#include <stdlib.h>

union Sup_int
{
    unsigned int i;
    unsigned char t[4];
};

int main()
{
    union Sup_int zm;
    zm.i=0x61626364;
    printf("%u\n",zm.i);
    printf("%c\n",zm.t[0]);
    printf("%c\n",zm.t[1]);
    printf("%c\n",zm.t[2]);
    printf("%c\n",zm.t[3]);
    return 0;
}
