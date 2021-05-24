#include <stdio.h>
#include <stdlib.h>

struct Trojkat
{
    double a, h;
};

struct Prostokat
{
    double a, b;
};

struct Trapez
{
    double a, b, h;
};

union Wymiary
{
    struct Trojkat troj, rown;
    struct Prostokat prost;
    struct Trapez trap;
};

struct Figura
{
    union Wymiary wym;
    int fig;
};

double pole(struct Figura f)
{
    switch(f.fig)
    {
        case 0 : return f.wym.troj.a * f.wym.troj.h / 2;
        case 1 : return f.wym.prost.a * f.wym.prost.b;
        case 2 : return f.wym.rown.a * f.wym.rown.h;
        case 3 : return (f.wym.trap.a + f.wym.trap.b) * f.wym.trap.h / 2;
        default : return 0;
    }

}

int main()
{
    struct Trojkat tro = {3, 4};
    struct Trojkat row = {3, 4};
    struct Prostokat pro = {5, 4};
    struct Trapez tra = {2, 1, 4};

    struct Figura trojkat1 = {{trojkat1.wym.troj = tro}, 0};

    //struct Figura prostokat1 = {{prostokat1.wym.prost = pro}, 1};
    struct Figura prostokat1;
    prostokat1.wym.prost = pro;
    prostokat1.fig = 1;

    struct Figura rownoleglobok1 = {{rownoleglobok1.wym.rown = row}, 2};

    //struct Figura trapez1 = {{trapez1.wym.trap = tro}, 0};
    struct Figura trapez1;
    trapez1.wym.trap = tra;
    trapez1.fig = 3;

    printf("Pole -  trojkat = %lf\n", pole(trojkat1));
    printf("Pole -  prostakat = %lf\n", pole(prostokat1));
    printf("Pole -  rownoleglobok = %lf\n", pole(rownoleglobok1));
    printf("Pole -  trapez = %lf\n", pole(trapez1));
    return 0;
}
