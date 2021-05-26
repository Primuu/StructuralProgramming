#include <stdio.h>
#include <stdlib.h>

enum plec
{
    mezczyzna, kobieta
};

enum mezczyzna
{
    wolny, zonaty
};

enum kobieta
{
    wolna, mezatka
};

union czlowiek
{
    enum mezczyzna m;
    enum kobieta k;
};

struct Dane_osobowe
{
    char imie[30];
    char nazwisko[30];
    enum plec plec;
    union czlowiek stan_cywilny;
};

void wczytaj(struct Dane_osobowe tab[], int n)
{
    int i, d;
    for( i = 0; i < n; i++)
    {
        printf("Kobieta 1\nMezczyzna - 2:");
        scanf("%d", &d);

        if(d == 1) tab[i].plec = kobieta;
        else tab[i].plec = mezczyzna;

        printf("Imie:");
        scanf("%s", tab[i].imie);

        printf("Nazwisko:");
        scanf("%s", tab[i].nazwisko);

        printf("Stan cywilny:");
        if(tab[i].plec == kobieta) printf("Wolna - 0, mezatka - 1:");
        else printf("Wolny - 0, zonaty - 1:");
        scanf("%u", &tab[i].stan_cywilny.k);
    }
}

void wypisz(struct Dane_osobowe tab[], int n)
{
    int i;
    for( i = 0; i < n; i++)
    {
        printf("Imie:     %s\n", tab[i].imie);
        printf("Nazwisko: %s\n", tab[i].nazwisko);
        if(tab[i].plec == kobieta) printf("Plec:     kobieta\n");
        else printf("Plec:     mezczyzna\n");
        if(tab[i].plec == kobieta)
        {
            if(tab[i].stan_cywilny.k == 0 ) printf("Stan:     wolna\n\n");
            else printf("Stan:     mezatka\n\n");
        }
        else
        {
            if(tab[i].stan_cywilny.m == 0 ) printf("Stan:     wolny\n\n");
            else printf("Stan:     zonaty\n\n");
        }

    }
}

int main()
{
    struct Dane_osobowe tab[2];
    wczytaj(tab, 2);
    wypisz(tab, 2);

    return 0;
}
