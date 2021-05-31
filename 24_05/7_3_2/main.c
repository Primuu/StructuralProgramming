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




struct element* wyczysc (struct element * Lista)
{
    struct element * wsk = Lista;
    while(Lista != NULL)
    {
        Lista = Lista->next;
        free(wsk);
        wsk = Lista;
    }
    Lista = NULL;
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



int main()
{
    struct element * Lista;
    Lista = utworz();

    struct element * wsk = malloc(sizeof(struct element));
     wsk->i=-4;
     wsk->next=NULL;
     Lista=wsk;

    wyswietlListeBezGlowy(Lista);

    Lista = wyczysc(Lista);

    wyswietlListeBezGlowy(Lista);

    return 0;
}
