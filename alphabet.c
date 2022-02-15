#include <math.h>
#include <stdio.h>


int main() {
     char c;
     printf("Enter the character\n");
     scanf("%c",&c);
     if (c>='a' && c<='z' || c>='A' && c<='Z')
     {
         printf("It is alphabte",c);
     }
     else{
          printf("It is not a alphabte",c);
     }
     
    return 0;
} 
    