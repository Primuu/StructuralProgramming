#include <stdio.h>
#include <stdlib.h>

void write(char *text)
{
    printf("%s", text);
}

void w_write(wchar_t *text)
{
    wprintf(L"%s", text);
}

int main()
{
    char *text = malloc(10 * sizeof(char));
    scanf("%s", text);
    write(text);

    printf("\n");

    wchar_t *wtext = malloc(10 * sizeof(wchar_t));
    wscanf(L"%s", wtext);
    w_write(wtext);
    return 0;
}
