 //check weather the number is divisible by 3 or not
 //varibale = 1
 //divisible by ->3 and the remainder is zero
 #include <stdio.h>
 int main()
 {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num % 3 == 0)
    {
        printf("number = %d is divisible by 3",num);
    }
    else
    {
        printf("number = %d is not divisible by 3",num);
    }
 }


