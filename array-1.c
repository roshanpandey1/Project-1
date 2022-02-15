#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
  // int n;
  // printf("Enter the total number of elements in an array : \n");
  // scanf("%d", &n);
  // Min value of the array
  int arr[]={7,5,13,9,80,2};
  int max= arr[0];
  int min=arr[0];
  for (int i = 1; i < 6; i++)
  {
     if(max<=arr[i]){
       max=arr[i];
     }
     if (min>arr[i])
     {
       min=arr[i];
     }  
     
  }
   printf("Max Value of the array %d \n", max);
   printf("Min Value of the array %d \n", min);

  // for(int j=0;j<15;j++){
  //   printf("Value %d \n", arr[j]);
  // }

  //  char str[5]={'a','b','c','d','e'};

  //     for ( int i = 0; i <  strlen(str) ; i++)
  //     {
  //            printf("%c\n",str[i]);
  //     }

  return 0;
}


// int max = arr[0];

// Second highest value
// Second smallest value
