#include <math.h>
#include <stdio.h>

int main() {
//    int m=4,n=7,val=1;
//    for ( int i = 1; i < n; i++)    ////// Declear input in computer 
//    {
//         val=val*m;
//    }
//    printf("%d",val);


    int m,n,val=1;
    printf("Enter a base ");
    scanf("%d",&m);
     printf("Enter a exponent ");     //////  Input in console
    scanf("%d",&n);
   for ( int i = 0; i < n; i++)
   {
        val=val*m;
   }
   printf("%d",val);
 return 0;
} 
     