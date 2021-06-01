#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element * next;
};


struct element* utworz()
{
    struct element * temp = malloc(sizeof(struct element));
    temp->next = NULL;
    return temp;
};

void dodajk(struct element*Lista, int a)
{
    struct element * wsk = Lista;
    while(wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct element));
    wsk = wsk->next;
    wsk->x = a;
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
        printf("%d\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}

int foo(struct element * Lista)
{
    int iloczyn = 1;
    while(Lista->next != NULL)
    {
        Lista = Lista->next;
        iloczyn *= Lista->x;
    }
    return iloczyn;
}




int fooR(struct element* lista)
{
    if(lista->next == NULL)
        return 1;
    return lista->next->x * fooR(lista->next);
}



int main()
{
    struct element* Lista = utworz();
    struct element* Lista1 = utworz();
    dodajk(Lista,9);
    dodajk(Lista,-8);
    dodajk(Lista,7);
    dodajk(Lista,-6);

    wyswietlListeZGlowa(Lista);

    printf("%d\n", foo(Lista1));
    printf("%d\n", foo(Lista));

    printf("%d\n", fooR(Lista1));
    printf("%d\n", fooR(Lista));

    return 0;
}
