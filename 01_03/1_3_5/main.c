#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c;
    double s1,s2,s3,a,h,p,area;
    printf("Obliczenie pola trojkata przez podanie\n1 - podstawy i wysokosci\nliczba calkowita nierowna 1 - bokow\n");
    scanf("%i",&c);
    if(c == 1){
                printf("\nPodaj dlugosc podstawy:\n");
                scanf("%lf",&a);
                printf("\nPodaj dlugosc wysokosci:\n");
                scanf("%lf",&h);
                area = 0.5 * a * h;
                printf("\nPole wynosi %f", area);
    }
    else{
        printf("\nPodaj dlugosc pierwszego boku:\n");
        scanf("%lf",&s1);
        printf("\nPodaj dlugosc drugiego boku\n");
        scanf("%lf",&s2);
        printf("\nPodaj dlugosc trzeciego boku\n");
        scanf("%lf",&s3);
        p = (s1 + s2 + s3) / 2;
        area = sqrt(p * (p - s1)*(p - s2)*(p - s3));
        printf("\nPole wynosi %f", area);

    }

    return 0;
}
