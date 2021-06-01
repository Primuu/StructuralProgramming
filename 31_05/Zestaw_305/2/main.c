#include <stdio.h>
#include <stdlib.h>

int length (char *text)
{
    int a = 0;
    while( *(text++))
    {
        a++;
    }
    return a;
}


char foo(char *text)
{
    char znak = '\0';
    for(int i = 0; i < length(text); i++)
    {
        if(*(text + i)>='A' && *(text + i) <= 'Z')
            {
                znak = *(text + i);
            }

    }
    return znak;
}



int main()
{
    char text[10] = "WERht23";
    char text1[10] = "877773";

    printf("%d\n", length(text));
    printf("%c\n", foo(text));
    printf("%c\n", foo(text1));


    return 0;
}
