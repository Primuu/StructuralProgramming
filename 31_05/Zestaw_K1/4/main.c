#include <stdio.h>
#include <stdlib.h>

int f1(float a)
{
    if(a > 5)
    {
        return 10;
    }
    return 1;
}

int f2(float b)
{
    for(int i = 0; i < 6; i++)
    {
        b+=b;
    }
    return (int)b/10;
}

int fun (int (*f1)(float a), int (*f2)(float b), int c)
{
    int d = f1(c);
    int e = f2(c);
    return d + e;
}




int main()
{
    printf("%d\n", f2(6));
    printf("%d\n", f1(6));
    printf("%d\n", fun(f1, f2, 6));
    return 0;
}
