#include <stdio.h>

int main() {
     char vowel;
     printf("Enter an alphbed\n");
     scanf("%c",&vowel);
     vowel=(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u');
     if (vowel)
     {
         printf("This alphbed is vowel");
     }
     else{
          printf("This alphbed is not a vowel");
     }
     
    return 0;
}


