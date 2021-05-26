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

//pomocnicza fukcja do wyswietlenia struktury
void infoPunkt(struct Punkt10 tablica, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        printf("%f ",tablica.tab[i]);
    }
    printf("--\n\n");
}

int main()
{
    struct Punkt10 punkcik[]={{{12.5,3,4,5,5,-2.3,2,1,6,7}},{{4,3,4,-7,5,8.3,2,9,6,-7}},{{14,3,24,-7,25,8.3,22,9,6,-7}}};

    infoPunkt(punkcik[0],10);
    infoPunkt(punkcik[1],10);
    infoPunkt(punkcik[2],10);

    struct Punkt10 punkcik2[]={{{2,3,42,5,25,-2.3,2,1,6,7}},{{24,35,34,-7,55,8.3,25,9,6,-7}},{{414,3,24,-74,25,8.3,22,94,6,-7}}};

    infoPunkt(punkcik2[0],10);
    infoPunkt(punkcik2[1],10);
    infoPunkt(punkcik2[2],10);

    foo(punkcik, punkcik2,3);

    infoPunkt(punkcik2[0],10);
    infoPunkt(punkcik2[1],10);
    infoPunkt(punkcik2[2],10);
    return 0;
    return 0;
}
