#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 7, 9, 3};

    // print elements using loops
    printf("Elements are :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Elements at position %d is %d\n", i, arr[i]);
    }
}