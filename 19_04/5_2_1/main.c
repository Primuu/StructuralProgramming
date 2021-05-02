#include <stdio.h>
#include <stdlib.h>

void clear(char *text)
{
    *text = 0;
}

void wclear(wchar_t *text)
{
    *text = 0;
}


int main()
{
    char * text = malloc(10 * sizeof(char));

    scanf("%s",text);
    clear(text);
    printf("%s\nTEST\n",text);


    wchar_t * wtext = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s",wtext);
    //wprintf(L"%s", wtext);
    clear(wtext);
    wprintf(L"%s\nTEST", wtext);

 return 0;
}
