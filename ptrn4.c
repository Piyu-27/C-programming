// *
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number:");
    scanf("%d", &n);

    // row
    for (i = 1; i <= n; i++)
    {
        // column
        for (j = 1; j <= n; j++)
            printf("*  ");
        printf("\n");
    }
    // move cursor to next line (next row)
}