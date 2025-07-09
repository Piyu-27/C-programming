// Wap to print factorial of n
#include <stdio.h>
int main()
{
    int i;
    int n;
    int fact = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    i = n; // start
    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    printf("The factoridal of %d is %d\n", n, fact);
}
