#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char imie[20];
    char nazwisko[30];
    char adres[30];
    char pesel[12];
    char kierunek[30];
    char numer_legitymacji[7];
};

void foo(struct Student *s)
{
    printf("Imie:");
    scanf("%s", s->imie);

    printf("Nazwisko:");
    scanf("%s", s->nazwisko);

    printf("Adres:");
    scanf("%s", s->adres);

    printf("Pesel:");
    scanf("%s", s->pesel);

    printf("Kierunek:");
    scanf("%s", s->kierunek);

    printf("Numer legitymacji:");
    scanf("%s", s->numer_legitymacji);
}



int main()
{
    struct Student s;
    foo(&s);
    printf("%s\n", s.imie);
    printf("%s\n", s.nazwisko);
    printf("%s\n", s.adres);
    printf("%s\n", s.pesel);
    printf("%s\n", s.kierunek);
    printf("%s\n", s.numer_legitymacji);
    return 0;
}
