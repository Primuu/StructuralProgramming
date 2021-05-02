#include <stdio.h>
#include <stdlib.h>

int length1 (char *text)
{
    int a = 0;
    while( *(text++))
    {
        a++;
    }
    return a;
}


int length2 (char text[])
{
    int a = 0;
    for (int i = 0; text[i] != 0; i++)a++;
    return a;
}

int length3(char *text)
{

    if (*text == 0)
        return 0;
    else
        return 1 + length3(text + 1);

}




int main()
{
    char a[] = "absad";
    char *b = "asdsadsadsadasd";

    printf("%i\n", length1(a));
    printf("%i\n", length2(a));
    printf("%i\n", length3(a));
    printf("%i\n", length1(b));
    printf("%i\n", length2(b));
    printf("%i\n", length3(b));
    return 0;
}
