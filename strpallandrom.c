#include <stdio.h>
#include <string.h>
int main()
{
     char str[10];
     int length,flag=0;
     printf("Enter a string ");
     scanf("%s",&str);
     length=strlen(str);
     for ( int i = 0; i < length; i++)
     {
        if (str[i]!=str[length-i-1])
        {
           flag=1;
           break;
        }
        
     }
     if (flag)
     {
        printf("Not a pallondrom");
     }
     else  {
        printf(" A pallondrom");
     }
     
 return 0;
}
