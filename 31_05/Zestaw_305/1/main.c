#include <stdio.h>
#include <stdlib.h>

union test
{
    int a;
    char b;
};

int main()
{
    union test zm = {95,'p'};
    int*p;
    p=&zm; // p=0x61fe10  , *p=95
    char w = zm.b; // w='_'  , &w=0x61fe17
    p++; // p=0x61fe14  , *p=1593835520
    w--; // w='^'  , &w=0x61fe17
    zm.b=99;  // w='^'  , &w=0x61fe17
    return 0;
}
