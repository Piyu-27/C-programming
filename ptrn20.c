// triangle with space
#include <stdio.h>
int main()
{
    int sp, i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= n - i; sp++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}