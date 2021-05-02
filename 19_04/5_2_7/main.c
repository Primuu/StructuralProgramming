#include <stdio.h>
#include <stdlib.h>

void concatenate(char *text1, char *text2, char *text3)
{   //assume text3 has enough space
    int i, j;
    for(i = 0; *(text1 + i) != 0; i++)
        *(text3 + i) = *(text1 + i);
    for(j = 0; *(text2 + j) != 0; i++, j++)
        *(text3 + i) = *(text2 + j);
    *(text3 + i) = 0;
}

void wconcatenate(wchar_t *text1, wchar_t *text2, wchar_t *text3)
{   //assume text3 has enough space
    int i, j;
    for(i = 0; *(text1 + i) != 0; i++)
        *(text3 + i) = *(text1 + i);
    for(j = 0; *(text2 + j) != 0; i++, j++)
        *(text3 + i) = *(text2 + j);
    *(text3 + i) = 0;
}

int main()
{
    char *text1 = malloc(5 * sizeof(char));
    char *text2 = malloc(5 * sizeof(char));
    char *text3 = malloc(10 * sizeof(char));

    scanf("%s",text1);
    scanf("%s",text2);
    concatenate(text1, text2, text3);
    printf("%s\n",text3);


    wchar_t *wtext1 = malloc(5 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(5 * sizeof(wchar_t));
    wchar_t *wtext3 = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s",wtext1);
    wscanf(L"%s",wtext2);
    wconcatenate(wtext1, wtext2, wtext3);
    wprintf(L"%s\n",wtext3);

    return 0;
}
