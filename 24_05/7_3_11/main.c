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


void wyczysc(struct element* Lista)
{
    struct element* wsk=Lista->next;
    struct element* temp=Lista->next;
    while(temp!=NULL)
    {
        temp=temp->next;
        free(wsk);
        wsk=temp;
    }
    Lista->next=NULL;
}

int main()
{
    struct element * Lista;
    Lista = utworz();

     struct element * wsk = malloc(sizeof(struct element));
     wsk->i=-4;
     wsk->next=Lista->next;
     Lista->next=wsk;

    wyswietlListeZGlowa(Lista);

    wyczysc(Lista);

    wyswietlListeZGlowa(Lista);

    return 0;
}
