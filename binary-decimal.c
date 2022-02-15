#include <stdio.h>
#include <math.h>

int main()
{
    int n, result = 0, i=0;

    printf("Enter a binary number ");
    scanf("%d", &n);
    while (n > 0)
    {
       int rem= n%10;
       result=result + rem*pow(2,i);
       n=n/10;
       i++;
    }
    printf("Result : %d", result);
    return 0;
}
// 1101
//  1*2^3 + 1*2^2    + 0*2^1  + 1* 2^0
// Decimal to Binary think