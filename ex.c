#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int count=0;
    printf("Enter a string ");
     scanf("%s",&str);
    for ( int i = 0; i <  strlen(str) ; i++)
    {
        if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
           count++;
           printf("%c\n",str[i]);
        }
        
    }
      printf("%d",count);
 return 0;
}
