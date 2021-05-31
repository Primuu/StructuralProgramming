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

struct element * dodaj (struct element * Lista, int a)
{

     struct element * wsk = malloc(sizeof(struct element));
     wsk->i = a;
     wsk->next = Lista;
     return wsk;

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


int main()
{
    struct element * Lista = utworz();
    Lista = dodaj(Lista, 1);
    Lista = dodaj(Lista, 2);
    Lista = dodaj(Lista, 3);
    Lista = dodaj(Lista, 4);


    struct element * wsk = Lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk -> next;
    }

    return 0;
}
