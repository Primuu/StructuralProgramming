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

struct element * minimum (struct element * Lista)
{
    struct element * min = Lista;
    while(Lista->next != NULL)
    {
        if(Lista->next->i < min->next->i)
        {
            min = Lista;
        }
        Lista = Lista->next;
    }
    return min;
}

void sortBezGlowy (struct element * Lista)
{
    struct element * pom, * pom2;
    while(Lista->next != NULL)
    {
        pom = minimum(Lista);
        if(pom!=Lista)
        {
            pom2 = pom->next;
            pom->next = pom2->next;
            pom2->next = Lista->next;
            Lista->next = pom2;
        }
        Lista = Lista->next;
    }
}


struct element * merge1(struct element * Lista1, struct element * Lista2)
{
    struct element * pom, * pom2;
    if (Lista1->i < Lista2->i)
    {
        pom = pom2 = Lista1;
        Lista1 = Lista1->next;
    }
    else
    {
        pom = pom2 = Lista2;
        Lista2 = Lista2->next;
    }
    while((Lista1 != NULL) && (Lista2 != NULL))
        if(Lista1->i < Lista2->i)
    {
        pom2->next = Lista1;
        Lista1 = Lista1->next;
        pom2 = pom2->next;
    }
    else
    {
        pom2->next = Lista2;
        Lista2 = Lista2->next;
        pom2 = pom2->next;
    }
    if(Lista1 != NULL)
        pom2->next = Lista1;
    else
        pom2->next = Lista2;
    return pom;
}

struct element * mergesortBezGlowy(struct element * Lista)
{
    struct element * pom1, * pom2,* l1,* l2;
    unsigned int i = 0;
    if((Lista == NULL) || (Lista->next == NULL))
        return Lista;
    l1 = pom1 = Lista;
    l2 = pom2 = Lista->next;
    Lista = Lista->next->next;
    while(Lista != NULL)
    {
        if(i%2)
        {
            pom1->next = Lista;
            pom1 = pom1 ->next;
        }
        else
        {
            pom2->next = Lista;
            pom2 = pom2->next;
        }
        i++;
        Lista = Lista->next;
    }
    pom1 ->next = NULL;
    pom2 ->next = NULL;
    l1 = mergesortBezGlowy(l1);
    l2 = mergesortBezGlowy(l2);
    l1 = merge1(l1, l2);
    return l1;
}


int main()
{
    struct element * Lista = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 10);
    Lista = dodajkBezGlowy(Lista, 9);
    Lista = dodajkBezGlowy(Lista, 11);
    Lista = dodajkBezGlowy(Lista, 4);

    wyswietlListeBezGlowy(Lista);

    Lista = mergesortBezGlowy(Lista);

    wyswietlListeBezGlowy(Lista);









    struct element* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG,93);
    dodajkZGlowa(ListaG,8);
    dodajkZGlowa(ListaG,111);
    dodajkZGlowa(ListaG,10);

    wyswietlListeZGlowa(ListaG);

    sortBezGlowy(ListaG);

    wyswietlListeZGlowa(ListaG);

    return 0;
}
