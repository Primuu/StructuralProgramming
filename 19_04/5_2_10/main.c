#include <stdio.h>
#include <stdlib.h>

int is_in(char *text1, char *text2, int n)
{
    int i;
    for(i = 0; (*(text1 + i) != 0) && (*(text2 + i) != 0); i++)
        {
            if (*(text1 + n + i) != *(text2 + i))
                return 0;
        }
        if(*(text2 + i) == 0)
            return 1;
        return 0;

}

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


void cut2(char *text1, char *text2)
{
    int i, len;

    for(len = 0; *(text2 + len) != 0; len++);
    for(i = 0; *(text1 + i) !=0; i++)
        if(is_in(text1, text2, i))
    {
        cut(text1, i, i + len - 1);
        return;
    }
}




// W_CHAR_T TYPE





int is_in_w(wchar_t *text1, wchar_t *text2, int n)
{
    int i;
    for(i = 0; (*(text1 + i) != 0) && (*(text2 + i) != 0); i++)
        {
            if (*(text1 + n + i) != *(text2 + i))
                return 0;
        }
        if(*(text2 + i) == 0)
            return 1;
        return 0;

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


void wcut2(wchar_t *text1, wchar_t *text2)
{
    int i, len;

    for(len = 0; *(text2 + len) != 0; len++);
    for(i = 0; *(text1 + i) !=0; i++)
        if(is_in_w(text1, text2, i))
    {
        wcut(text1, i, i + len - 1);
        return;
    }
}

int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(5 * sizeof(char));

    scanf("%s", text1);
    scanf("%s", text2);
    cut2(text1, text2);
    printf("%s\n", text1);


    wchar_t *wtext1 = malloc(10 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(5 * sizeof(wchar_t));

    wscanf(L"%s", wtext1);
    wscanf(L"%s", wtext2);
    wcut2(wtext1, wtext2);
    wprintf(L"%s\n", wtext1);


    return 0;
}
