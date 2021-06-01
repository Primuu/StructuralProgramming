#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="Adam"; //tu trzeba wpisac swoje imie, pierwsza litera duza, reszta male
    char z = *(napis+2); //z='a'
    int a = napis[3]; // a=109   ,z='a'
    z++; // a=109   ,z='b'
    ++a; // a=110   ,z='b'
    z=(a-=2)+3; // a=108   ,z='o'
    a=a^4; // a= 104  ,z='o'
    return 0;
}
