// find min an max element present in aaray elements are 2,100,-6,150,1
#include <stdio.h>
int main()
{
    int i;
    int arr[] = {2, 100, -6, 150, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("min = %d\n max = %d\n", min, max);
}