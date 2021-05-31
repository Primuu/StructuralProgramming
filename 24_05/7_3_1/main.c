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


int main()
{
    struct element * Lista;
    Lista = utworz();

    ////////////////////////////////////////
    struct element * wsk = malloc(sizeof(struct element));
     wsk->i=-4;
     wsk->next=NULL;
     Lista=wsk;

    struct element * wsk1 = Lista;
    while(wsk1 != NULL)
    {
        printf("%d\n", wsk1->i);
        wsk1 = wsk1 -> next;
    }

    return 0;
}
