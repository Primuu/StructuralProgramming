#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};


struct element* utworz()
{
    struct element * temp = malloc(sizeof(struct element));
    temp->next = NULL;
    return temp;
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


void dodajk(struct element*Lista, int a)
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


struct element * znajdzp(struct element*Lista, int a)
{
    while((Lista != NULL) && (Lista->i != a))
    {
        Lista = Lista->next;
    }
    return Lista;
};

int main()
{
    struct element* Lista = utworz();
    struct element * search = utworz(); // tutaj raczej lista bez glowy
    dodajk(Lista,2);
    dodajk(Lista,4);
    dodajk(Lista,-8);
    dodajk(Lista,-22);

    wyswietlListeZGlowa(Lista);

    search = znajdzp(Lista, -8);  //za 3 podstawic szukana

/////////////////////////////////////////////////////////////////////////
    if(search==NULL)
    {
        printf("Lista nie zawiera elementu szukanego\n");
    }
    else
    {
        printf("%d <-\n",search->i);
    }

    wyswietlListeZGlowa(search);

    return 0;
}
