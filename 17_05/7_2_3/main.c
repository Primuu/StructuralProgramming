#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt
{
    double x, y, z;
};

double min_distance(struct Punkt tab[], int n)
{
    int i, j;
    double a;
    double min_d = sqrt(pow(tab[1].x - tab[0].x, 2)
                        +pow(tab[1].y - tab[0].y, 2)
                        +pow(tab[1].z - tab[0].z, 2));
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            a = sqrt(pow(tab[j].x - tab[i].x, 2)
                     +pow(tab[j].y - tab[i].y, 2)
                     +pow(tab[j].z - tab[i].z, 2));
            if (a < min_d) min_d = a;
        }
    }
    return min_d;
}

int main()
{
    struct Punkt tab[5];
    struct Punkt p1 = {0, 0 , 0};
    struct Punkt p2 = {0, 2 , 6};
    struct Punkt p3 = {0, 1 , 0};
    struct Punkt p4 = {3, 0 , 0};
    struct Punkt p5 = {0, 4 , 0};
    tab[0] = p1;
    tab[1] = p2;
    tab[2] = p3;
    tab[3] = p4;
    tab[4] = p5;

    printf("%f\n", min_distance(tab, 5));

    return 0;
}
