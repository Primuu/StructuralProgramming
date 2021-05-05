#include <stdio.h>
#include <stdlib.h>

int compare(char *text1, char *text2)
{
    int a, b;
    a = 0;
    b = 0;
    while( *(text1++))
    {
        a++;
    }
    while( *(text2++))
    {
        b++;
    }
    if(a != b) return 0;
    for(int i = 0; i < a; i++)
    {
        if(*(text1 + i) != *(text2 + i))return 0;
    }
    return 1;
}

int wcompare(wchar_t *text1, wchar_t *text2)
{
    int a, b;
    a = 0;
    b = 0;
    while( *(text1++))
    {
        a++;
    }
    while( *(text2++))
    {
        b++;
    }
    if(a != b) return 0;
    for(int i = 0; i < a; i++)
    {
        if(*(text1 + i) != *(text2 + i))return 0;
    }
    return 1;
}


int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(10 * sizeof(char));

    scanf("%s",text1);
    scanf("%s",text2);
    printf("%i\n", compare(text1, text2));


    wchar_t *wtext1 = malloc(10 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(10 * sizeof(wchar_t));
    wscanf(L"%s",wtext1);
    wscanf(L"%s",wtext2);
    printf("%i\n", wcompare(wtext1, wtext2));

    return 0;
}
