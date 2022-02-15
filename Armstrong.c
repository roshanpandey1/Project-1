#include<stdio.h>

int main(){
     int n,r,c,sum=0,tem;
     printf("Enter a nummber ");
     scanf("%d",&n);
     tem=n;
     while (n!=0)
     {
       r=n%10;
       c=r*r*r;
       sum=sum+c;
       n=n/10;
     }
     n=tem;
     if (n==sum)
     {
       printf("Aemstrong");
     }
     else {
       printf("A not Aemstrong");
     }
    return 0;
}