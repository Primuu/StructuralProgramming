#include <stdio.h>
#include <stdlib.h>

char *connect1(char *text1, char *text2, char *text3)
{
    int i, l1, l2, l3;
    l1 = 0;
    l2 = 0;
    l3 = 0;
    for(i = 0; *(text1 + i) != 0; i++)l1++;
    for(i = 0; *(text2 + i) != 0; i++)l2++;
    for(i = 0; *(text3 + i) != 0; i++)l3++;
    char *result = malloc((1 + l1 + l2 + l3) * sizeof(char));
    strcpy(result, text1);
    strcat(result, text2);
    strcat(result, text3);
    return result;
}

char *connect2(char *text1, char *text2, char *text3)
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

    printf("%s", connect1("Func", "tion t","est1"));
    printf("\n");
    printf("%s", connect2("Func", "tion t","est2"));
    printf("\n");

    wprintf(L"%s", wconnect("Func", "tion t","est3"));
    printf("\n");


    return 0;
}
