#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="ADAM"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z='A'
    int a = napis[3]; // a=77   ,z='A'
    z++; // a=77   ,z='B'
    ++a; // a=78   ,z='B'
    z=(a-=2)+3; // a=76   ,z='O'
    a=a^4; // a=72   ,z='O'
    return 0;
}
