#include <stdio.h>

int main() {
    int n,fact=1;
    printf("Enter a number ");
    scanf("%d",&n);
     for ( int i = n; i >=1; i--)
     {
          fact=fact*i;
     }
     printf("%d",fact);
    return 0;
}