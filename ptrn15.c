// patrn upto n aplhabet
#include <stdio.h>
int main()
{
    char alp = 'A';
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%c ", alp);
                }
        printf("\n");
        alp++;
    }
}