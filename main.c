#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    unsigned int variant, N;
    double X1, X2, delta, result;
    char C;

    printf("Enter variant (1 or 2): ");
    scanf("%d", &variant);

      while(variant!= 1 && variant!= 2)
      {
          printf("Variant not valid. Please try again: ");
          scanf("%d",&variant);
      }

      if(variant == 1)
      {
    printf("Perform action for var 1\n");
       printf("\n Enter x1: ");
       scanf("%lf", &X1);
       printf("\n Enter x2: ");
       scanf("%lf", &X2);
       printf("\n Enter N: ");
       scanf("%u", &N);
       int i=1;

       printf("\n***************************************");
       printf("\n*     N     *     F     *     F(X)    *");
       printf("\n***************************************");

           delta=(X2-X1)/(N-1);
           for(i;i<=N;i++)

           {
               result=-4*pow(X1,3)-3*pow(X1,2)+2*pow(X1,2)-5*X1-25;;
                printf("\n+-----------+------------+------------+");
               printf("\n|%11.0d|%12.2f|%12.2f|\n",i,X1,result);
               if (i%8==0)
               {
                   printf("\nPress any key to continue...");
                   C = getch();
               }
               X1=X1+delta;
           }
               }
      else if (variant == 2)
      {
    printf("perform action for var 2\n");
       printf("\n Enter x1: ");
       scanf("%lf", &X1);
       printf("\n Enter x2: ");
       scanf("%lf", &X2);
       printf("\n Enter delta: ");
       scanf("%lf", &delta);
       int i=1;

       printf("\n***************************************");
       printf("\n*     N     *     F     *     F(X)    *");
       printf("\n***************************************");

        while(X1<=X2)
           {
               result=-4*pow(X1,3)-3*pow(X1,2)+2*pow(X1,2)-5*X1-25;;
                printf("\n+-----------+------------+------------+");
               printf("\n|%11.0d|%12.2f|%12.2f|\n",i,X1,result);
               if (i%8==0)
               {
                printf("\nPress any key to continue...");
                C = getch();
               }
               X1=X1+delta;
               i++;
           }
               }
               C=getch();
 printf ("Program finished\n");
    return 0;
}
