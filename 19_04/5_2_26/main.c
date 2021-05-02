#include <stdio.h>
#include <stdlib.h>

void f_toupper(char *text)
{
    for(int i = 0; *(text + i) != 0; i++)
        *(text +i) = toupper( *(text + i));
}

void w_toupper(wchar_t *text)
{
    for(int i = 0; *(text + i) != 0; i++)
        *(text +i) = towupper( *(text + i));
}

int main()
{
    char *text = malloc(10 * sizeof(char));

    scanf("%s", text);
    f_toupper(text);
    printf("%s\n", text);

    wchar_t *wtext = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s", wtext);
    w_toupper(wtext);
    wprintf(L"%s\n", wtext);
    return 0;
}
