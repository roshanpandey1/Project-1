#include<stdio.h>

int main(){
    int n,first,last,middle,search,i,arr[10];
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("Enter %d number\n",n);
    for (  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Find the search number\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
     while (first <= last) {
    if (arr[middle] < search)
      first = middle + 1;
    else if (arr[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
   
   return 0;
 }