// WAP to print odd and even sum of element from given array
// arr = {5,1,2,3,4,6,8,10}
#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 2, 3, 4, 6, 8, 10};
    int i;
    int evensum = 0, oddsum = 0;
    int lenght = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < lenght; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // even
            // evensum = evensum + arr[i];
            evensum += arr[i];
        }
        else
        {
            // odd
            // oddsum = oddsum + arr[i];
            oddsum += arr[i];
        }
    }
    printf("Even sum of elements = %d\n", evensum);
    printf("Odd sum of elements = %d\n", oddsum);
}
