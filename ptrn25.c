// diamond
#include <stdio.h>
int main()
{
    int sp, i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // upper half
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // lower half
    for (i = n - 1; i >= 1; i--)
    {
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}