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


int main()
{


     struct element * Lista = utworz();
     printf("%p\n", Lista);
     printf("%p\n", &Lista);

     struct element * wsk = malloc(sizeof(struct element));
     wsk->i=-4;
     wsk->next=Lista->next;
     Lista->next=wsk;

     wyswietlListeZGlowa(Lista);


    return 0;
}
