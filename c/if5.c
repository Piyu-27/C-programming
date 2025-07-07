// WAP to check weather the number is odd or even
//evben -> divisible by 2 -> divide num by 2 and remainder is zero
//odd -> not divide by 2 ->not divisible by 2 -> divide num  by 2 and remainder is non zero
//variable = 1
//condition = 2
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("number = %d is even\n", num);
    } else {
        printf("number = %d is odd\n", num);
    }

    return 0;
}
