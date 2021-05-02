#include <stdio.h>
#include <stdlib.h>

int compare_lexicographically(char *text1, char *text2)
{   int i;
    for(i = 0; (*(text1 + i) != 0) && (*(text2 + i) != 0); i++)
        if(*(text1 + i) != *(text2 + i))
            return (*(text1 + i) < *(text2 + i))?1:0;
    if(*(text1 + i) != 0)
        return 0;
    return 1;
}


int main()
{
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(10 * sizeof(char));

    scanf("%s",text1);
    scanf("%s",text2);
    printf("%i\n", compare_lexicographically(text1, text2));


    return 0;
}
