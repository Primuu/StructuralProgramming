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




int maks_roznBezGlowy(struct element * Lista)
{
    struct element * pom;
    int maks = abs(Lista->i - Lista->next->i);
    for(;Lista->next != NULL; Lista = Lista->next)
    {
        for(pom = Lista->next; pom != NULL; pom = pom->next)
        {
            if(abs(pom->i - Lista->i) > maks)
            {
                maks = abs(pom->i - Lista->i);
            }
        }
    }
    return maks;
}


int maks_roznZGlowa(struct element * Lista)
{
    struct element * pom;
    int maks = abs(Lista->next->i - Lista->next->next->i);
    for(Lista = Lista->next ;Lista->next != NULL; Lista = Lista->next)
    {
        for(pom = Lista->next->next; pom != NULL; pom = pom->next)
        {
            if(abs(pom->i - Lista->i) > maks)
            {
                maks = abs(pom->i - Lista->i);
            }
        }
    }
    return maks;
}




int main()
{
    struct element * Lista = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 0);
    Lista = dodajkBezGlowy(Lista, 2);
    Lista = dodajkBezGlowy(Lista, 3);
    Lista = dodajkBezGlowy(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    printf("%d\n\n\n", maks_roznBezGlowy(Lista));





    struct element* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG,9);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,7);
    dodajkZGlowa(ListaG,0);

    wyswietlListeZGlowa(ListaG);

    printf("%d\n\n\n", maks_roznZGlowa(ListaG));

    return 0;
}
