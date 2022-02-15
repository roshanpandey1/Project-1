#include <stdio.h>

int main()
{
    int a, b, i, j;
    printf("Enter a two number ");
    scanf("%d %d ", &a, &b);
    for (i = a + 1; i <= b - 1; i++)
    {
        for (j = 2; 2 < i; j++)
            if (i % j == 0)

                break;

        if (j == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}