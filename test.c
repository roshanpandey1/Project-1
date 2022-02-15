 #include <stdio.h>
 #include<string.h>
 
int main()
{
	 int n,LB,MB,UB,SL,SU;
	 printf("Enter the number ");
     scanf("%d",&n);
	  if (n%8 == 1 || n%8 == 4)
	  {
		 printf("LB");
	  }
	  if (n%8 == 2 || n%8 == 5)
	  {
		 printf("MB");
	  }
	  if (n%8 == 3 || n%8 == 6)
	  {
		 printf("UB");
	  }
	  if ( n%8 == 7)
	  {
		 printf("SL");
	  }
	  if (  n%8 == 0)
	  {
		 printf("SU");
	  }
	  
     return 0;
}

//       1 2 3
//         4 5 6    7 8
// 		9 10 11   
// 		12 13 14  15 16 
 
//   n%2 = 1,0  0%2 = 0 1%2 = 1 
//   n%3 = 0, 1, 2 
//   n%4 = 0, 1, 2, 3

//   n%8 = 0,1,2,3,4,5,6,7

//   LB - n%8 == 1 || n%8 == 4
//   MB - n%8 == 2 || n%8 == 5
//   UB - n%8 == 3 || n%8 == 6

//   SL - n%8 == 7
//   SU - n%8 == 0
  

