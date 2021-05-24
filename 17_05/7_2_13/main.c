#include <stdio.h>
#include <stdlib.h>

struct Figura
{
    int fig; // trojkat - 0, prostokat - 1, rownoleglobok - 2, trapez -3
    double a, h, b;
};

double pole(struct Figura f)
{
    if(f.fig == 0)
    {
        return f.a * f.h / 2;
    }
    if(f.fig == 1)
    {
        return f.a * f.b;
    }
    if(f.fig == 2)
    {
    return f.a * f.h;
    }
    if(f.fig == 3)
    {
        return (f.a + f.b) * f.h / 2;
    }
    return 0;
}


int main()
{
    struct Figura trojkat = {0, 3, 4, 0};
    struct Figura prostokat = {1, 3, 0, 4};
    struct Figura rowneloglobok = {2, 3, 4, 0};
    struct Figura trapez = {3, 2, 4, 1};

    printf("Pole -  trojkat = %lf\n", pole(trojkat));
    printf("Pole -  prostakat = %lf\n", pole(prostokat));
    printf("Pole -  rownoleglobok = %lf\n", pole(rowneloglobok));
    printf("Pole -  trapez = %lf\n", pole(trapez));
    return 0;
}
