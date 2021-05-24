#include <stdio.h>
#include <stdlib.h>

union Sup_int
{
    unsigned int i;
    unsigned char t[4];
};

unsigned int foo(unsigned int a, unsigned int b)
{
    union Sup_int poma, pomb, pomwyn;
    poma.i = a;
    pomb.i = b;
    pomwyn.t[0] = poma.t[0] * pomb.t[0];
    pomwyn.t[1] = poma.t[1] * pomb.t[1];
    pomwyn.t[2] = poma.t[2] * pomb.t[2];
    pomwyn.t[3] = poma.t[3] * pomb.t[3];
    return pomwyn.i;
}

int main()
{
    printf("%d\n", foo(4, 4));
    return 0;
}
