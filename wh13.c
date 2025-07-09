//WAP to print table of n till x iteration
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    int table;
    int x;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a iteration:");
    scanf("%d",&x);
    while (i <= x)
    {
    table = n*i;
    printf("%d*%d=%d\n",n,i,table);
    i++;
    }
    
}