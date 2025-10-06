// WAP to accept input in array of size 6 print sum of elements
#include <stdio.h>
int main()
{
    int arr[6], i, sum = 0;
    // input
    for (i = 0; i < 6; i++)
    {
        printf("Elements at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // display
    printf("Elements are: \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
        // sum = sum + arr[i]
        sum += arr[i];
    }
    // display total sum
    printf("\n Total sum is = %d\n", sum);
}