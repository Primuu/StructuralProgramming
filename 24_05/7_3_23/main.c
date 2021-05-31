#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojka
{
    int a, b, c;
    struct trojka * next;
};

struct trojka * utworzBezGlowy()
{
    return NULL;
}

struct trojka * dodajkBezGlowy (struct trojka * Lista, int a, int b, int c)
{

     struct trojka * wsk;
     if (Lista == NULL)
     {
         Lista = wsk = malloc(sizeof(struct trojka));
     }
     else
     {
         wsk = Lista;
         while(wsk->next != NULL)
         {
                wsk = wsk->next;
         }
         wsk->next = malloc(sizeof(struct trojka));
         wsk = wsk->next;

     }
     wsk->a = a;
     wsk->b = b;
     wsk->c = c;
     wsk->next = NULL;
     return Lista;

}

void wyswietlListeBezGlowy(struct trojka*Lista)
{
    struct trojka*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("a=%d, b=%d, c=%d\n", temp->a, temp->b, temp->c);
        temp=temp->next;
    }
    printf("----\n");
}








struct trojka* utworzZGlowa()
{
    struct trojka * temp = malloc(sizeof(struct trojka));
    temp->next = NULL;
    return temp;
};

void dodajkZGlowa(struct trojka*Lista, int a, int b, int c)
{
    struct trojka * wsk = Lista;
    while(wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct trojka));
    wsk = wsk->next;
    wsk->a = a;
    wsk->b = b;
    wsk->c = c;
    wsk->next = NULL;

};


void wyswietlListeZGlowa(struct trojka * Lista)
{
    struct trojka*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("a=%d, b=%d, c=%d\n", temp->a, temp->b, temp->c);
        temp=temp->next;
    }
    printf("----\n");
}


int tr(struct trojka * e)
{
    if((e->a * e->a + e->b * e->b == e->c * e->c) || (e->a * e->a + e->c * e->c == e->b * e->b) || (e->c * e->c + e->b * e->b == e->a * e->a))
    {
        return 1;
    }
    return 0;
}

struct trojka * pitagorasBezGlowy(struct trojka * Lista)
{
    struct trojka * pom, * pom2;
    while((Lista != NULL) && (!tr(Lista)))
    {
        pom = Lista;
        Lista = Lista->next;
        free(pom);
    }
    if (Lista == NULL)
        return NULL;
    pom = Lista;
    while(pom->next != NULL)
    {
        if(tr(pom->next))
        {
            pom = pom-> next;
        }
        else
        {
            pom2 = pom->next;
            pom->next = pom2->next;
            free(pom2);
        }
    }
    return Lista;
}

void pitagorasZGlowa(struct trojka * Lista)
{
    struct trojka * pom;
    while(Lista->next != NULL)
    {
        if(tr(Lista->next))
        {
            Lista = Lista->next;
        }
        else
        {
            pom = Lista ->next;
            Lista->next = pom->next;
            free(pom);
        }
    }
}



int main()
{
    struct trojkat * Lista = utworzBezGlowy();
    Lista = dodajkBezGlowy(Lista, 3, 4, 5);
    Lista = dodajkBezGlowy(Lista, 1, 2, 3);
    Lista = dodajkBezGlowy(Lista, 3, 5, 2);
    Lista = dodajkBezGlowy(Lista, 4, 4, 4);

    wyswietlListeBezGlowy(Lista);

    Lista = pitagorasBezGlowy(Lista);

    wyswietlListeBezGlowy(Lista);



    printf("\n\n\n\n");




    struct trojkat* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG, 3, 4, 5);
    dodajkZGlowa(ListaG, 4, 10, 5);
    dodajkZGlowa(ListaG, 5, 7, 9);
    dodajkZGlowa(ListaG, 6, 7, 8);

    wyswietlListeZGlowa(ListaG);

    pitagorasZGlowa(ListaG);

    wyswietlListeZGlowa(ListaG);

    return 0;
}
