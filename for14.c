// wap to print the series of prime number till n

#include <stdio.h>
int main()
{
    int i, n;
    int isPrime = 0; // true
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            isPrime = 1; // not a prime
            break;
        }
    }

    if (isPrime == 0)
    {
        printf("Number %d is a prime number\n", n);
    }
    else
    {
        printf("Number %d is not a prime number\n", n);
    }
}