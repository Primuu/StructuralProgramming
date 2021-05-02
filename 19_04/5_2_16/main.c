#include <stdio.h>
#include <stdlib.h>

void write_to_string(char *text)
{
    scanf("%s", text);
}

void w_write_to_string(wchar_t *text)
{
    wscanf(L"%s", text);
}
int main()
{
    char *text = malloc(10 * sizeof(char));
    write_to_string(text);
    printf("%s\n", text);

    wchar_t *wtext = malloc(10 * sizeof(wchar_t));
    w_write_to_string(wtext);
    wprintf(L"%s\n", wtext);
    return 0;
}
