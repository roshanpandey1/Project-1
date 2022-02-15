#include<stdio.h>

int main(){
    int a[3]={5,6,7};
    int *ptr;
    ptr=a;
    for ( int i = 0; i < 3 ; i++)
    {
        printf(" The value is *ptr = %d",*ptr);
         printf(" The addresh of ptr = %p",ptr);
         
    }
    
    return 0;
}