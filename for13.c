// WAP to print table of n till x iteration
#include <stdio.h>
int main()
{
    int i, n, table, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number till x iteration: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
}