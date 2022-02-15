#include<stdio.h>

int main(){
    int a,b;
    char option;
    printf("Enter two an intiger number ");
    scanf("%d %d ",&a,&b);
     printf("select the option (+,-,/,*)\n");
    scanf("%c",&option);
    switch (option)
    {
    case  '+': printf("Addition is %d",a+b);
      break;
     case  '-': printf("Subtraction is %d",a-b);
      break;
       case  '/': printf("Division is %d",a/b);
      break;
       case  '*': printf("Multipicaton is %d",a*b);
      break;
    default: printf("Invalid chose");
      break;
    }
    return 0;
}