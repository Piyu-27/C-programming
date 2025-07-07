//SIMPLE CALCULATOR -> 2 NUMBER -> 1 operator [+,-,*,/]
#include <stdio.h>
int main()
{
    int n1,n2;
    char operator;
    printf("Select operation from [+,-,*,/]:");
    scanf("%c",&operator);
    printf("Enter number 1:");
    scanf("%d",&n1);
     printf("Enter number 2:");
    scanf("%d",&n2);
    int result;

    switch (operator)
    {
        case '+':
        result = n1 + n2;
        printf("%d+%d=%D\n",n1,n2,result);
        break;
         case '-':
        result = n1 - n2;
        printf("%d-%d=%D\n",n1,n2,result);
        break;
         case '*':
        result = n1 * n2;
        printf("%d*%d=%D\n",n1,n2,result);
        break;
        case '/':
        if (n2 == 0)
        {
            ptintf("Cannot divide by zero\n");
        }
        else
        {                                                         
        result = n1/n2;
        printf("%d/%d=%d\n",n1,n2,result);}
        break;
        default:
        printf("Please select from above range\n");
        
        return 0;

    }
    


}