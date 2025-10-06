// arrays -> to store multiple same data in contegious form (collections)
#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Elements at postion %d = %d\n", i, arr[i]);
    }
}