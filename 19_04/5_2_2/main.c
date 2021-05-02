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

int wlength (wchar_t *text)
{
    int a = 0;
    while( *(text++))
    {
        a++;
    }
    return a;
}


int main()
{
    char * text = malloc(10 * sizeof(char));

    scanf("%9s",text);
    printf("%i\n", length(text));

    wchar_t * wtext = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s",wtext);
    //wprintf(L"%s", wtext);
    printf("%i", wlength(wtext));




 return 0;
}
