#include <math.h>
#include <stdio.h>


int main() {
     int a,b,h;
     printf("Enter atwo number ");
     scanf("%d %d",&a,&b);
     for(h=a<b?a:b;h>1;h--){
         if (a%h==0&&b%h==0)
         {
             printf("The hcf is %d",h);
         }
         
     }
    return 0;
} 
     