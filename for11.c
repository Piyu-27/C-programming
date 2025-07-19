// wap to print factorial of n
#include <stdio.h>

int main()
{
    int i, n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fact = fact * i; // Corrected this line
    }

    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}
