#include<stdio.h>
#include <math.h>
int main(){
     int a,b,c,d;
     float root1,root2;
     printf("Enter a cofficient of a,b,c ");
     scanf("%d %d %d",&a,&b,&c);
     d = b*b-4*a*c;
     if (d<0)
     {
         printf("Both root are imaginary");
     }
     if (d==0)
     {
         printf("Roots are equal");
         root1=(-b)/(2*a);
         printf("%d",root1);
     }
     if (d>0)
     {
         printf("Roots are equal and discriment");
         root1=(-b+sqrt(d))/(2*a);
         root2=(-b-sqrt(d))/(2*a);
         printf("%f %f",root1,root2);
     }
     
     
    return 0;
}