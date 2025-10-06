// Arrays
// Take input in array from user
#include <stdio.h>
int main()
{
    // Array declare
    // data_type arr_name[size]
    int i;
    int arr[5];
    // input 5 times
    for (i = 0; i < 5; i++)
    {
        printf("Enter elements at %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    // display
    printf("Elements are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    // display elements in reverse order
    printf("\nElements in reverse order are: \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}