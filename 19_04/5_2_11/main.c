#include <stdio.h>
#include <stdlib.h>


void cut_included1(char *text1, char *text2)
{
    int i, j;
    int *is_in_tab = malloc(256 * sizeof(int));

    for(i = 0; i < 256; i++)
    {
        *(is_in_tab + i) = 0;
    }

    for(i = 0; *(text2 + i) != 0; i++)
        *(is_in_tab + (int)*(text2 + i)) = 1;

    for(i = 0, j = 0; *(text1 + i) != 0; i++)
        {
            if (*(is_in_tab + (int)*(text1 + i)) == 0)
                {
                    if(j < i)
                        *(text1 + j) = *(text1 + i);
                    j++;
                }
        }
        *(text1 + j) = 0;
}

void cut_included2(char *text1, char *text2)
{
    int i, j;
    int is_in_tab[256]={};

    for(i = 0; i < 256; i++)
    {
        is_in_tab[i] = 0;
    }

    for(i = 0; *(text2 + i) != 0; i++)
        is_in_tab[(int) * (text2 + i)] = 1;

    for(i = 0, j = 0; *(text1 + i) != 0; i++)
       {
           if (is_in_tab[(int) * (text1 + i)] == 0)
            {
                if(j < i)
                    *(text1 + j) = *(text1 + i);
                j++;
            }
       }
        *(text1 + j) = 0;
}



// W_CHAR_T TYPE



int is_in_w(wchar_t z, wchar_t *text)
{
    int i;
    for(i = 0; *(text + i) != 0; i++)
        if(*(text + i) == z)
            return 1;
    return 0;
}

void wcut_included(wchar_t *text1, wchar_t *text2)
{
    int i, j;
    for(i = 0, j = 0; *(text1 + i) != 0; i++)
    {
        if (!is_in_w(*(text1 + i), text2))
            {
                if(j < i)
                    *(text1 + j) = *(text1 + i);
                j++;
            }
    }
        *(text1 + j) = 0;
}


int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(5 * sizeof(char));

    scanf("%s", text1);
    scanf("%s", text2);
    cut_included1(text1, text2);
    printf("%s\n", text1);



    char *text3 = malloc(10 * sizeof(char));
    char *text4 = malloc(5 * sizeof(char));

    scanf("%s", text3);
    scanf("%s", text4);
    cut_included2(text3, text4);
    printf("%s\n", text3);



    wchar_t *wtext1 = malloc(10 * sizeof(wchar_t));
    wchar_t *wtext2 = malloc(5 * sizeof(wchar_t));

    wscanf(L"%s", wtext1);
    wscanf(L"%s", wtext2);
    wcut_included(wtext1, wtext2);
    wprintf(L"%s\n", wtext1);

    return 0;
}
