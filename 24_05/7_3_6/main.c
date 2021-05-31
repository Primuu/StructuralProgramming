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



struct element * znajdz (struct element * Lista, int a)
{
    while((Lista != NULL) && (Lista->i != a))
    {
        Lista = Lista->next;
    }
    return Lista;

}


int main()
{
    struct element * Lista = utworz();
    struct element * search = utworz();
    Lista = dodajk(Lista, 1);
    Lista = dodajk(Lista, 2);
    Lista = dodajk(Lista, 3);
    Lista = dodajk(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    search = znajdz(Lista, 3);  //za 3 podstawic szukana

    if(search==NULL)
    {
        printf("Lista nie zawiera elementu szukanego\n");
    }
    else
    {
        printf("%d\n",search->i);
    }

    return 0;
}
