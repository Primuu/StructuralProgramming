#include <stdio.h>
#include <stdlib.h>

void cut_identical(char *text1, char *text2)
{
    int i, j;
    for(i = 0, j = 0; *(text1 + i) != 0; i++)
        if (*(text1 + i) != *(text2 + i))
            {
                if(j < i)
                    *(text1 + j) = *(text1 + i);
                j++;
            }
        *(text1 + j) = 0;
}

void wcut_identical(wchar_t *text1, wchar_t *text2)
{
    int i, j;
    for(i = 0, j = 0; *(text1 + i) != 0; i++)
        if (*(text1 + i) != *(text2 + i))
            {
                if(j < i)
                    *(text1 + j) = *(text1 + i);
                j++;
            }
        *(text1 + j) = 0;
}


int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(10 * sizeof(char));

    scanf("%s", text1);
    scanf("%s", text2);
    cut_identical(text1, text2);
    printf("%s\n", text1);


    wchar_t *wtext1 = malloc(10 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(10 * sizeof(wchar_t));

    wscanf(L"%s", wtext1);
    wscanf(L"%s", wtext2);
    wcut_identical(wtext1, wtext2);
    wprintf(L"%s\n", wtext1);

    return 0;
}
