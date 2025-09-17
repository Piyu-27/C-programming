// wap to check wheather the number is perfect number or not

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number to check wheather it is perfect or not:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    if (sum + i == n)
    {
        printf("number = %d is perfect number\n", n);
    }
    else
    {
        printf("number = %d is not a perfect number\n", n);
    }
}