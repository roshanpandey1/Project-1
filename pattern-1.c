#include <math.h>
#include <stdio.h>


int main() {
       int n;
       scanf("%d",&n);
       for ( int i = n; i>=1; i-=2)
       {
          for ( int j = 1;j<=n;j++)
          {
             if (j >= i && j<2*n-i  )
      {
        printf("%d", i+1);
        p=1;

      }
      else if(p==1){
         printf(" ");
        
      } 
      else
      {
        printf(" ");
      }
        printf("\n");
    }

       
    return 0;
} 
     