#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int p=0;
    for (int j = 0; j < 2*n; j++)
    {
      if (j >= i && j<2*n-i && p==0)
      {
        printf("%d", i+1);
        p=1;

      }
      else if(p==1){
         printf(" ");
          p=0;
      } 
      else
      {
        printf(" ");
      }
    }

    printf("\n");
  }
  return 0;
}