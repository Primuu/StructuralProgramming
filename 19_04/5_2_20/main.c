#include <stdio.h>
#include <stdlib.h>

char *what_time(int hour, int min, int sec)
{
    char *hms = malloc(9 * sizeof(char));
    sprintf(hms, "%02d:%02d:%02d", hour, min, sec);
    return hms;
}

char *w_what_time(int hour, int min, int sec)
{
    wchar_t *hms = malloc(9 * sizeof(wchar_t));
    swprintf(hms,9, L"%02d:%02d:%02d", hour, min, sec);
    return hms;
}

int main()
{
    printf("%s", what_time(8, 43,12));
    printf("\n");
    wprintf(L"%s", w_what_time(7, 12, 04));
    return 0;
}
