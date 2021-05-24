#include <stdio.h>
#include <stdlib.h>

struct Punkt10
{
    double tab[10];
};

void foo(struct Punkt10 tab1[], struct Punkt10 tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    struct Punkt10 tab1[1];
    struct Punkt10 tab2[1];
    double tabp1[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    //double tabp2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //struct Punkt p1 = tabp1;
/*
    struct Punkt p2 = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    tab1[0] = p1;
    tab2[0] = p2;

    printf("Tab1 = (%f, %f, %f, %f, %f, %f, %f, %f, %f, %f)\n",
           tab1[0].p1[0], tab1[0].p1[1], tab1[0].p1[2], tab1[0].p1[3],tab1[0].p1[4],
           tab1[0].p1[5], tab1[0].p1[6], tab1[0].p1[7], tab1[0].p1[8], tab1[0].p1[9]);


    foo(tab1, tab2, 1);

*/
    return 0;
}
