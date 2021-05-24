#include <stdio.h>
#include <stdlib.h>
union Super_int
{
    int i;
    unsigned int u;
};
int main()
{
    union Super_int zm;
    zm.i = 10;
    //zm.u = 11;
    printf("%c\n",zm.i);
    printf("%d\n",zm.i);
    printf("%c\n",zm.u);
    printf("%d\n",zm.u);
    return 0;
}
