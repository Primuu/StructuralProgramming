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



struct element * dodajw (struct element * Lista, struct element * elem, int a)
{

     struct element * wsk = malloc(sizeof(struct element));
     wsk->i = a;

     if (elem == NULL)
     {
         wsk->next = Lista;
         Lista = wsk;
     }
     else
     {
         wsk->next = elem->next;
         elem->next = wsk;

     }

     return Lista;

}


int main()
{
    struct element * Lista = utworz();
    struct element * elem = utworz();
    Lista = dodajk(Lista, 1);
    Lista = dodajk(Lista, 2);
    Lista = dodajk(Lista, 3);
    Lista = dodajk(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    Lista = dodajw(Lista, elem, 111);

    wyswietlListeBezGlowy(Lista);

    Lista = dodajw(Lista, Lista, 222);

    wyswietlListeBezGlowy(Lista);

    Lista = dodajw(Lista, Lista->next->next->next, 333);

    wyswietlListeBezGlowy(Lista);


    return 0;
}
