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

int wystepuje(struct element * Lista, int i)
{
    while(Lista != NULL)
    {
        if(Lista->i == i)
        {
            return 1;
        }
        Lista = Lista->next;
    }
    return 0;
}

struct element * powtorzoneBezGlowy (struct element * Lista1, struct element * Lista2)
{
    struct element * Lista3, * pom, * pom2;
    Lista3 = NULL;
    if ((Lista1 == NULL) || (Lista2 == NULL))
        return NULL;
    pom = Lista1;
    while(pom != NULL)
    {
        if((wystepuje(Lista2, pom->i)) && (!wystepuje(Lista3, pom->i)))
        {
            if(Lista3 == NULL)
            {
                pom2 = Lista3 = malloc (sizeof(struct element));
            }
            else
            {
                pom2->next = malloc(sizeof(struct element));
                pom2 = pom2->next;
            }
            pom2->i = pom->i;
        }
        pom = pom->next;
    }
    pom2->next = NULL;
    return Lista3;
}





int main()
{
    struct element * Lista1 = utworzBezGlowy();
    Lista1 = dodajkBezGlowy(Lista1, 0);
    Lista1 = dodajkBezGlowy(Lista1, 2);
    Lista1 = dodajkBezGlowy(Lista1, 2);
    Lista1 = dodajkBezGlowy(Lista1, 4);

    wyswietlListeBezGlowy(Lista1);

    struct element * Lista2 = utworzBezGlowy();
    Lista2 = dodajkBezGlowy(Lista2, 0);
    Lista2 = dodajkBezGlowy(Lista2, 2);
    Lista2 = dodajkBezGlowy(Lista2, 2);
    Lista2 = dodajkBezGlowy(Lista2, 4);

    wyswietlListeBezGlowy(Lista2);

    struct element * Lista3 = utworzBezGlowy();

    Lista3 = powtorzoneBezGlowy(Lista1, Lista2);


    wyswietlListeBezGlowy(Lista3);







/*

    struct element* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG,9);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,7);
    dodajkZGlowa(ListaG,10);

    wyswietlListeZGlowa(ListaG);

*/
    return 0;
}
