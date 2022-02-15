#include <math.h>
#include <stdio.h>


int main() {
     int n;
     printf("Enter a year ");
     scanf("%d",&n);
     if (n%4==0 && n%100!=0 || n%400==0)
     {
        printf("This year is leap year ");

     }
     else{
         printf("This year is not a leap year");
     }
     
    return 0;
} 
     