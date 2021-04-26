#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[] = {-2,2,-3,0,4,4,6};
    int *wsk=tab+1;
    int b = *(wsk+=4); //b=4
    int c = b+2; // b=4  , c=6
    int d = foo(&b,&c); // b=4  , c=6  , d=10
    int e = (wsk+=-1)[3]; // b=4  , c=6  , d=10  , e=0
    b = *wsk + e+3; // b=7  , c=6  , d=10  , e=0
    c = d - (b+=3); // b=10  , c=0  , d=10  , e=0
    e = (d -= 3) + (c += 2); // b=10  , c=2  , d=7  , e=9
    b= (--c)-(d++);  // b=-6  , c=1  , d=8  , e=9
    return 0;
}
