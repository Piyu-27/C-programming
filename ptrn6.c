// abcde
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number:");
    scanf("%d", &n);

    // row
    for (i = 1; i <= n; i++)
    {
        char alp = 'A'; // 65
        // column
        for (j = 1; j <= n; j++)
        {
            printf("%c\t ", alp);
            alp++;
        }
        printf("\n ");
    }
}