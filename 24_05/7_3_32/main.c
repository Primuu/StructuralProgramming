#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    return NULL;
}

struct element * dodajk (struct element * Lista, int a)
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


struct element * polacz(struct element * Lista1, struct element * Lista2)
{
    struct element * pom, * pom2;
    if(Lista1 == NULL)
        return NULL;
    pom = pom2 = Lista1;
    Lista1 = Lista1->next;
    pom2->next = Lista2;
    pom2 = Lista2;
    Lista2 = Lista2->next;
    while(Lista1 != NULL)
    {
        pom2->next = Lista1;
        pom2 = Lista1;
        Lista1 = Lista1->next;
        pom2->next = Lista2;
        pom2 = Lista2;
        Lista2 = Lista2->next;
    }
    return pom;
}




int main()
{
    struct element * Lista1 = utworz();
    Lista1 = dodajk(Lista1, 1);
    Lista1 = dodajk(Lista1, 3);
    Lista1 = dodajk(Lista1, 5);
    Lista1 = dodajk(Lista1, 7);

    wyswietlListeBezGlowy(Lista1);

    struct element * Lista2 = utworz();
    Lista2 = dodajk(Lista2, 2);
    Lista2 = dodajk(Lista2, 4);
    Lista2 = dodajk(Lista2, 6);
    Lista2 = dodajk(Lista2, 8);

    wyswietlListeBezGlowy(Lista2);

    struct element * Nowa = utworz();

    Nowa = polacz(Lista1, Lista2);

    wyswietlListeBezGlowy(Nowa);


    return 0;
}
