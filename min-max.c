#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
  int arr[]={7,5,13,9,80,2};
  int max= arr[0];
  int min=arr[0];
  for (int i = 1; i < 6; i++)
  {
     if(max<=arr[i]){
         max=max-1;
       max=arr[i];
     }
     if (min>arr[i])
     {
       min=arr[i];
     }  
     
  }
   printf("Max Value of the array %d \n", max);
   printf("Min Value of the array %d \n", min);

   
  return 0;
}


 