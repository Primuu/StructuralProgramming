#include <stdio.h>
#include <stdlib.h>

void f_toupperASCI(char *text)
{
    for(int i = 0; *(text + i) != 0; i++)
    {
        if(*(text + i) >= 97 && *(text + i) <= 122) *(text + i) -= 32;
    }
}

void f_toupper(char *text)
{
    for(int i = 0; *(text + i) != 0; i++)
    {
        if(*(text + i) >= 'a' && *(text + i) <= 'z') *(text + i) -= ('a' - 'A');
    }
}
int main()
{
    char *text1 = malloc(10 * sizeof(char));

    scanf("%s",text1);
    f_toupper(text1);
    printf("%s\n",text1);

    char *text2 = malloc(10 * sizeof(char));

    scanf("%s",text2);
    f_toupperASCI(text2);
    printf("%s\n",text2);

    return 0;
}
