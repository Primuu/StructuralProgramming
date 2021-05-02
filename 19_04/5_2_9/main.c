#include <stdio.h>
#include <stdlib.h>

void cut(char *text, int n, int m)
{
    int i;
    int len = 0;

    for(i = 0; *(text + i) != 0; i++)len++;

    if(len >= m)
    {
        for(i = 0; i + m < len; i++)
            *(text + n + i) = *(text + m + 1 + i);
    }
    else
        if ((n < len) && (len < m))
        *(text + n) = 0;
}

void wcut(wchar_t *text, int n, int m)
{
    int i;
    int len = 0;

    for(i = 0; *(text + i) != 0; i++)len++;

    if(len >= m)
    {
        for(i = 0; i + m < len; i++)
            *(text + n + i) = *(text + m + 1 + i);
    }
    else
        if ((n < len) && (len < m))
        *(text + n) = 0;
}

int main()
{
    char *text = malloc(10 * sizeof(char));

    scanf("%s", text);
    cut(text, 3 , 6);
    printf("%s\n", text);


    wchar_t *wtext = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s", wtext);
    wcut(wtext, 3 , 6);
    wprintf(L"%s\n", wtext);

    return 0;
}
