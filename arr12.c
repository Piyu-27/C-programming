// WAP to accept size and value in array from user
#include <stdio.h>
int main()
{
    int size, i;
    // declare array
    int arr[20]; // fixed size to avoid unneccasry size to array
    printf("Enter size of array,max size is 20: ");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("we can only store 20 so modifying size to 20\n");
        size = 20;
    }
    // input
    // start = 0, stop = size, gap = 1
    for (i = 0; i < size; i++)
    {
        printf("Elements at postion %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // display
    printf("Elements are: \n ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    // elements in reverse order
    printf("\n Elements in reverse order are: \n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}