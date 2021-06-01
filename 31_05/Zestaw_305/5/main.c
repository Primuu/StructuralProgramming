#include <stdio.h>
#include <stdlib.h>

struct element
{
    double x;
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
     wsk->x = a;
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
        printf("%lf\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}



struct element* usun_ujemneBezGlowy(struct element*Lista)
{
    struct element*wsk=malloc(sizeof(struct element));
    if(Lista==NULL)
    {
        return NULL;
    }
    wsk=Lista;
       while((Lista!=NULL))
       {
           if(Lista->x < 0)
           {
               if(wsk!=0)
                  {
                      wsk->next=Lista->next;
                  }
                else
                {
                    wsk=Lista->next;
                }

            struct element*wsk2=Lista;
            Lista=Lista->next;
            free(wsk2);
           }
           else
           {
               wsk=Lista;
               Lista=Lista->next;
           }
       }
    return Lista;
}




int main()
{
    struct element * Lista = utworz();
    Lista = dodajk(Lista, 1);
    Lista = dodajk(Lista, 2);
    Lista = dodajk(Lista, -3);
    Lista = dodajk(Lista, -4);

    wyswietlListeBezGlowy(Lista);

    usun_ujemneBezGlowy(Lista);

    wyswietlListeBezGlowy(Lista);

    return 0;
}
