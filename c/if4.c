//WAP to check greatest of 2 numbers
//varibales = 2
//conditions = 2
#include <stdio.h>
int main()
{
    int n1,n2;

    printf("Enter a number 1 : ");
    scanf("%d",&n1);

    printf("Enter a number 2 : ");
    scanf("%d",&n2); 

    if (n1>n2)
    {
        printf("Number 1 = %d is greater than number 2 = %d",n1, n2);
    }
    else
    {
        printf("Number 2 = %d is greater than number 1 = %d",n2, n1);
    }
}