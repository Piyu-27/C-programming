// Wap to print factorial of n
#include <stdio.h>
int main()
{
    int i, n, fact;
    printf("Enter a numbner: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
        i--;
        }
    printf("The factorial of %d is %d", n, fact);
}