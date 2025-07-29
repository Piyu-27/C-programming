// wap to print sum of elements

#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 3, 10, 15};
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++)

    {
        sum = sum + arr[i];
    }
    printf("Addition of elements present in array is : %d\n", sum);
}