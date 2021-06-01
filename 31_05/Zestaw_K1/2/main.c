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


void foo(char *text)
{
    int i;
    for(i = 0; i < length(text); i++)
    {
        if(i % 2 == 0)
            {
                *(text + (i/2))  = *(text + i) ;
            }

    }

    if(i % 2 == 0)
        *(text + (i/2)) = 0;
    else
        *(text + ((i+1)/2)) = 0;
}



int main()
{
    char text[10] = "abc123";

    printf("%d\n", length(text));
    foo(text);
    printf("%s\n", text);


    return 0;
}
