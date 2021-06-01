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



struct element * odwrocBezGlowy (struct element * Lista)
{
    struct element * pom1, * pom2;
    if ((Lista == NULL) || (Lista->next == NULL))
        return Lista;
    pom1 = Lista->next;
    pom2 = pom1->next;
    Lista->next = NULL;
    pom1->next = Lista;
    while(pom2 != NULL)
    {
        Lista = pom1;
        pom1 = pom2;
        pom2 = pom2->next;
        pom1->next = Lista;
    }
    return pom1;
}


void odwrocZGlowa(struct element*Lista)
{
    struct element* temp1;
    struct element* temp2;
    if(Lista->next)
    {
        temp2=Lista->next;
        while(temp2->next)
        {
            temp1=temp2->next;
            temp2->next=temp1->next;
            temp1->next=Lista->next;
            Lista->next=temp1;
        }
    }
}




int main()
{
    struct element * Lista = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 0);
    Lista = dodajkBezGlowy(Lista, 2);
    Lista = dodajkBezGlowy(Lista, 3);
    Lista = dodajkBezGlowy(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    Lista = odwrocBezGlowy(Lista);

    wyswietlListeBezGlowy(Lista);









    struct element* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG,9);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,7);
    dodajkZGlowa(ListaG,10);

    wyswietlListeZGlowa(ListaG);

    odwrocZGlowa(ListaG);

    wyswietlListeZGlowa(ListaG);

    return 0;
}
