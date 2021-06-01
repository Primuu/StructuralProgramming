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


int minimumBezGlowy(struct element * Lista)
{
    int mini = Lista->i;
    while(Lista != NULL)
    {
        if (Lista->i < mini)
        {
            mini = Lista->i;
        }
        Lista = Lista->next;
    }
    return mini;
}

int minimumZGlowa(struct element * Lista)
{
    int mini = Lista->next->i;
    while(Lista->next != NULL)
    {
        Lista = Lista->next;
        if (Lista->i < mini)
        {
            mini = Lista->i;
        }

    }
    return mini;
}


int main()
{
    struct element * Lista = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 0);
    Lista = dodajkBezGlowy(Lista, 2);
    Lista = dodajkBezGlowy(Lista, 3);
    Lista = dodajkBezGlowy(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    printf("\n\n\n%d\n\n\n", minimumBezGlowy(Lista));









    struct element* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG,9);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,7);
    dodajkZGlowa(ListaG,10);

    wyswietlListeZGlowa(ListaG);

    printf("\n\n\n%d\n\n\n", minimumZGlowa(ListaG));

    return 0;
}
