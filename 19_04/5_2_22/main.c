#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *connect(char *text1, char *text2, char *text3)
{
    char *result = malloc((strlen(text1) + strlen(text2) + strlen(text3) + 1) * sizeof(char));
    strcpy(result, text1);
    strcat(result, text2);
    strcat(result, text3);
    return result;
}

wchar_t *wconnect(wchar_t *text1, wchar_t *text2, wchar_t *text3)
{
    wchar_t *result = malloc((wcslen(text1) + wcslen(text2) + wcslen(text3) + 1) * sizeof(wchar_t));
    wcscpy(result, text1);
    wcscat(result, text2);
    wcscat(result, text3);
    return result;
}


int main()
{

    printf("%s", connect("Func", "tion t","est1"));
    printf("\n");

    wprintf(L"%s", wconnect(L"Func", L"tion t", L"est3"));
    printf("\n");


    return 0;
}
