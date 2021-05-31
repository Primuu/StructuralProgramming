#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    float a, b, c, pole;
    struct trojkat * next;
};

struct trojkat * utworzBezGlowy()
{
    return NULL;
}

struct trojkat * dodajkBezGlowy (struct trojkat * Lista, float a, float b, float c)
{

     struct trojkat * wsk;
     if (Lista == NULL)
     {
         Lista = wsk = malloc(sizeof(struct trojkat));
     }
     else
     {
         wsk = Lista;
         while(wsk->next != NULL)
         {
                wsk = wsk->next;
         }
         wsk->next = malloc(sizeof(struct trojkat));
         wsk = wsk->next;

     }
     wsk->a = a;
     wsk->b = b;
     wsk->c = c;
     wsk->next = NULL;
     return Lista;

}

void wyswietlListeBezGlowy(struct trojkat*Lista)
{
    struct trojkat*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("a=%f, b=%f, c=%f, pole=%f\n", temp->a, temp->b, temp->c, temp->pole);
        temp=temp->next;
    }
    printf("----\n");
}








struct trojkat* utworzZGlowa()
{
    struct trojkat * temp = malloc(sizeof(struct trojkat));
    temp->next = NULL;
    return temp;
};

void dodajkZGlowa(struct trojkat*Lista, float a, float b, float c)
{
    struct trojkat * wsk = Lista;
    while(wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct trojkat));
    wsk = wsk->next;
    wsk->a = a;
    wsk->b = b;
    wsk->c = c;
    wsk->next = NULL;

};


void wyswietlListeZGlowa(struct trojkat * Lista)
{
    struct trojkat*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("a=%f, b=%f, c=%f, pole=%f\n", temp->a, temp->b, temp->c, temp->pole);
        temp=temp->next;
    }
    printf("----\n");
}






void poleBezGlowy(struct trojkat * Lista)
{
    while(Lista != NULL)
    {
        if((Lista->a + Lista->b > Lista->c)&&(Lista->a + Lista->c > Lista->b)&&(Lista->c + Lista->b > Lista->a))
        {
            float p = (Lista->a + Lista->b + Lista->c) / 2;
            Lista->pole = sqrt(p * (p - Lista->a) * (p - Lista->b) * (p - Lista->c));
        }
        else
        {
            Lista->pole = 0;
        }
        Lista = Lista->next;
    }
}



void poleZGlowa(struct trojkat * Lista)
{
    while(Lista->next != NULL)
    {
        Lista = Lista->next;
        if((Lista->a + Lista->b > Lista->c)&&(Lista->a + Lista->c > Lista->b)&&(Lista->c + Lista->b > Lista->a))
        {
            float p = (Lista->a + Lista->b + Lista->c) / 2;
            Lista->pole = sqrt(p * (p - Lista->a) * (p - Lista->b) * (p - Lista->c));
        }
        else
        {
            Lista->pole = 0;
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

    poleBezGlowy(Lista);

    wyswietlListeBezGlowy(Lista);



    printf("\n\n\n\n");




    struct trojkat* ListaG = utworzZGlowa();
    dodajkZGlowa(ListaG, 3, 4, 11);
    dodajkZGlowa(ListaG, 4, 10, 5);
    dodajkZGlowa(ListaG, 5, 7, 9);
    dodajkZGlowa(ListaG, 6, 7, 8);

    wyswietlListeZGlowa(ListaG);

    poleZGlowa(ListaG);

    wyswietlListeZGlowa(ListaG);

    return 0;
}
