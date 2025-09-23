// pyramid
#include <stdio.h>
int main()
{
    int sp, i, n, j;
    printf("Enter a number: ");
    scanf("%d", &n);
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
}
