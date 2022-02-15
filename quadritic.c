#include <math.h>
#include <stdio.h>


int main() {
     float a,b,c,d,root1,root2,realPart, imagPart;
     printf("Enter a cofficients of a b c ");
     scanf("%f %f %f",&a,&b,&c);
     d=b*b-4*a*c;
     if (d>0)
     {
         root1=(-b+sqrt(d))/(2*a);
         root2=(-b-sqrt(d))/(2*a);
         printf("print root1 & root2 %f %f",root1,root2);
     }
      if (d=0)
     {
         root1=(-b)/(2*a);
          printf("print root1 %f",root1);
     }
      
         else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
     