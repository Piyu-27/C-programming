//WAP to accept age and check is suitable for licence or not
//age>=18->Eligible for licence
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age");
    scanf("%D",&age);
    if (age>=18)
    {
        printf("Eligible for licence");
    }
    else
    {
        printf("Not eligible for licence");
    }
}