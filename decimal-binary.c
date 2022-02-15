#include<stdio.h>
#include<math.h>

int main(){
    int n,result=0, i=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while (n>0)
    {
       int rem= n%2;
       result = result + rem*pow(10,i);  
       n=n/2;
       i++;  //i=3

    }
    printf("Result : %d",result);
    return 0;
}

//  13  1101

//  13%2 = 1, 13/2 = 6
//  6%2 = 0, 6/2=3
//  3%2 = 1, 3/2=1
//  1%2 = 1, 1/2=0