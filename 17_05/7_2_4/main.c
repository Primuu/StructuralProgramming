#include <stdio.h>
#include <stdlib.h>

struct Punkt
{
    double x, y, z;
};

void foo(struct Punkt tab1[], struct Punkt tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    struct Punkt tab1[2];
    struct Punkt tab2[2];
    struct Punkt p1 = {1, 1 , 1};
    struct Punkt p2 = {2, 2 , 2};
    struct Punkt p3 = {3, 3 , 3};
    struct Punkt p4 = {4, 4 , 4};

    tab1[0] = p1;
    tab1[1] = p2;
    tab2[0] = p3;
    tab2[1] = p4;

    printf("Tab1 = (%f, %f, %f), (%f, %f, %f)\n",
           tab1[0].x, tab1[0].y, tab1[0].z, tab1[1].x, tab1[1].y, tab1[1].z);
    printf("Tab2 = (%f, %f, %f), (%f, %f, %f)\n\n",
           tab2[0].x, tab2[0].y, tab2[0].z, tab2[1].x, tab2[1].y, tab2[1].z);

    foo(tab1, tab2, 2);

    printf("Tab1 = (%f, %f, %f), (%f, %f, %f)\n",
           tab1[0].x, tab1[0].y, tab1[0].z, tab1[1].x, tab1[1].y, tab1[1].z);
    printf("Tab2 = (%f, %f, %f), (%f, %f, %f)\n",
           tab2[0].x, tab2[0].y, tab2[0].z, tab2[1].x, tab2[1].y, tab2[1].z);


    return 0;
}
