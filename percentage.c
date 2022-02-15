
#include <math.h>
#include<stdio.h>

int main(){
     int a,b,c;
     float sum=0,per;
     printf("Enter a marks ");
     scanf("%d %d %d",&a,&b,&c);
     sum=a+b+c;
     per=sum*100/300;
     printf("Total no is %f\n",sum);
     printf("Total per is %f",per);
    return 0;
}