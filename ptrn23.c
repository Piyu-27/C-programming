// K pattern
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // upper half
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // lower half
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}