// calculations
#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9};
    int i;

    // how to calculate size ?
    int totalsize = sizeof(arr);
    printf("total size of arryas is %d bytes\n", totalsize);

    // how to calculate lenght
    int lenght = totalsize / sizeof(arr[0]);
    printf("Toatal lenght of array is %d\n", lenght);
}