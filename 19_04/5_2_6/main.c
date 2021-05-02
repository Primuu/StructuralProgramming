#include <stdio.h>
#include <stdlib.h>

void copy_text_n(char *text1, char *text2, int n)
{
    int a = 0;
    int i;

    for (i = 0; *(text1 + i) != 0; i++)a++;

    if(a < n)
    {
        for(i = 0; *(text1 + i) != 0; i++) //assume text2 has enough space
            {*(text2 + i) = *(text1 + i);}
        *(text2 + i) = 0;
    }
    else
    for(i = 0; i < n; i++) //assume text2 has enough space
        {*(text2 + i) = *(text1 + i);}
    *(text2 + i) = 0;
}

void copy_wtext_n(wchar_t *text1, wchar_t *text2, int n)
{
    int a = 0;
    int i;

    for (i = 0; *(text1 + i) != 0; i++)a++;

    if(a < n)
    {
        for(i = 0; *(text1 + i) != 0; i++) //assume text2 has enough space
            {*(text2 + i) = *(text1 + i);}
        *(text2 + i) = 0;
    }
    else
    for(i = 0; i < n; i++) //assume text2 has enough space
        {*(text2 + i) = *(text1 + i);}
    *(text2 + i) = 0;
}


int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(10 * sizeof(char));

    scanf("%s",text1);
    scanf("%s",text2);
    copy_text_n(text1, text2, 3);
    printf("%s\n",text2);


    wchar_t *wtext1 = malloc(10 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s",wtext1);
    wscanf(L"%s",wtext2);
    copy_wtext_n(wtext1, wtext2, 3);
    wprintf(L"%s\n",wtext2);

    return 0;
}
