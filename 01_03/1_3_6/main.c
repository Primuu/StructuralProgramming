#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,w,wx,wy,x,y;

    printf("Podaj wspolczynniki pierwszego rownania:\n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    printf("Podaj wspolczynniki drugiego rownania:\n");
    scanf("%f\n%f\n%f",&d,&e,&f);

    w = (a * e) - (b * d);
    wx = (c * e) - (b * f);
    wy = (a * f) - (c * d);


    if(w != 0){
                x = wx / w;
                y = wy / w;
                printf("\nx = %f",x);
                printf("\ny = %f",y);}

        else if(w == 0 && wx == 0 && wy == 0) {printf("\nNieskonczenie wiele rozwiazan");}
            else printf("\nBrak rozwiazan");

    return 0;
}
