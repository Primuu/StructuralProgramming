#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w;
   double k,p,a,b,area;

   printf("Wybierz figure:\n1 - kwadrat\n2 - prostokat\n3 - trojkat\n");
   scanf("%d",&w);

   if(w == 1 || w == 2 || w ==3)
   printf("Podaj wymiar/y:\n");

   if(w == 1)
   {
       scanf("%lf",&k);
       area = k * k;
   }
   else if (w == 2)
   {
       scanf("%lf\n%lf",&k,&p);
       area = k * p;
   }
   else if (w == 3)
   {
       scanf("%lf\n%lf\n%lf",&k,&a,&b);
       p = (k + a + b) / 2;
       area = sqrt(p * (p - k)*(p - a)*(p - b));
   }
   else printf("\nWybierz figure z listy!\n");

    if(w == 1 || w == 2 || w ==3)
   printf("Pole wynosi %lf\n",area);






    return 0;
}
