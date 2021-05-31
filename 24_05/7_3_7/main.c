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



struct element * usun (struct element * Lista, int a)
{
    struct element * wsk, * wsk2;

    if (Lista == NULL) return Lista;

    wsk = Lista;
    if (Lista->i == a)
    {
        Lista = Lista->next;
        free(wsk);
    }
    else
    {
           while((wsk->next != NULL) && (wsk->next->i != a))
            {
                wsk = wsk->next;
                if(wsk->next != NULL)
                {
                    wsk2 = wsk->next;
                    wsk->next = wsk2->next;
                    free(wsk2);
                }
            }
    }
    return Lista;

}


int main()
{
    struct element * Lista = utworz();
    Lista = dodajk(Lista, 1);
    Lista = dodajk(Lista, 2);
    Lista = dodajk(Lista, 3);
    Lista = dodajk(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    Lista = usun(Lista,3);

    wyswietlListeBezGlowy(Lista);

    return 0;
}
