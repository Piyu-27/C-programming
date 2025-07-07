//aceept day number print day name
#include <stdio.h>
int main()
{
    int n1;
    printf("Enter a number:");
    scanf("%d",&n1);
    if (n1 == 1)
    {
        printf("Monday");
    }
     else if (n1 == 2)
    {
        printf("Tuesday");
    }
    else if (n1 == 3)
    {
        printf("Wednesday");
    }
    else if (n1 == 4)
    {
        printf("Thursday");
    }
   else  if (n1 == 5)
    {
        printf("Friday");
    }
    else if (n1 == 6)
    {
        printf("Saturday");
    }
    else if (n1 == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("The number is invalid");
    }
}