#include <stdio.h>
#include <stdlib.h>

void foo(float** tab, unsigned int n, unsigned int m)
{
    int i, j;
    float p;
    for(i = 0; i < n; i++)
        {
            if(i % 2 == 1)
            {
                for(j = 0; j < m / 2; j++)
                    {
                        p = *(*(tab + i) + j);
                        *(*(tab + i) + j) = *(*(tab + i) + m - j - 1);
                        *(*(tab + i) + m - j - 1) = p;
                    }
            }
        }

}

int main()
{
    int n = 4, m = 3;

    float** tab = (float**) malloc(sizeof(float*) * n);
    int i, j;

    for (i = 0; i < n; i++)
    {
        *(tab + i) = (float*) malloc(sizeof(float) * m);
    }





    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(*(tab + i)+j) = i + j + 1;
        }
    }



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%f ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }

 printf("\n\n\n\n\n");


    foo(tab, n, m);



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d,%d]=%f ", i, j, *(*(tab + i)+j));
        }
        printf("\n");
    }


    return 0;
}
