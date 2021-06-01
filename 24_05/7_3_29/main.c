#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworzBezGlowy()
{
    return NULL;
}

struct element * dodajkBezGlowy (struct element * Lista, int a)
{

     struct element * wsk;
     if (Lista == NULL)
     {
         Lista = wsk = malloc(sizeof(struct element));
     }
     else
     {
         wsk = Lista;
         while(wsk->next != NULL)
         {
                wsk = wsk->next;
         }
         wsk->next = malloc(sizeof(struct element));
         wsk = wsk->next;

     }
     wsk->i = a;
     wsk->next = NULL;
     return Lista;

}

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}








struct element* utworzZGlowa()
{
    struct element * temp = malloc(sizeof(struct element));
    temp->next = NULL;
    return temp;
};

void dodajkZGlowa(struct element*Lista, int a)
{
    struct element * wsk = Lista;
    while(wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct element));
    wsk = wsk->next;
    wsk->i = a;
    wsk->next = NULL;

};


void wyswietlListeZGlowa(struct element * Lista)
{
    struct element*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}



struct element * kopiujBezGlowy (struct element * Lista)
{
    struct element * kopia, * pom;
    if (Lista == NULL)
        return NULL;
    kopia = malloc(sizeof(struct element));
    pom = kopia;
    pom->i = Lista->i;
    Lista = Lista->next;
    while(Lista != NULL)
    {
        pom->next = malloc(sizeof(struct element));
        pom = pom->next;
        pom->i = Lista->i;
        Lista = Lista->next;
    }
    pom->next = NULL;
    return kopia;
}





struct element* kopiujZGlowa(struct element * Lista)
{
    struct element* kopia, * pom;
    if(Lista->next==NULL)
        return NULL;
    kopia=malloc(sizeof(struct element));
    pom=kopia;
    pom->i=Lista->next->i;
    Lista=Lista->next;
    while(Lista != NULL)
    {
        pom->next=malloc(sizeof(struct element));
        pom = pom->next;
        pom->i = Lista->i;
        Lista = Lista->next;
    }
    pom->next = NULL;
    return kopia;

};


int main()
{
    struct element * Lista = utworzBezGlowy();
    struct element * Kopia = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 0);
    Lista = dodajkBezGlowy(Lista, 2);
    Lista = dodajkBezGlowy(Lista, 3);
    Lista = dodajkBezGlowy(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    Kopia = kopiujBezGlowy(Lista);

    wyswietlListeBezGlowy(Kopia);









    struct element* ListaG = utworzZGlowa();
    struct element* KopiaG = utworzZGlowa();
    dodajkZGlowa(ListaG,9);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,7);
    dodajkZGlowa(ListaG,0);

    wyswietlListeZGlowa(ListaG);

    KopiaG = kopiujZGlowa(ListaG);

    wyswietlListeZGlowa(KopiaG);

    return 0;
}
