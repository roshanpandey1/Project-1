 #include<stdio.h>
#include <string.h>
 
 int main(){
  int i,j,a[3][3];
  for ( i = 0; i < 3; i++)
  {
   for (  j = 0; j < 3; j++)
   {
    if (i==j)
    {
     printf("1");
    }
    else{
      printf("0");
    }
   }
   printf("\n");
  }
  
   return 0;
 }