// print pattern of 12345

#include <stdio.h>
int main()
{
    int i, j;
    // row
    for (i = 1; i <= 5; i++)
    {
        // column
        for (j = 1; j <= 5; j++)
            printf("%d ", j);
        printf("\n");
    }
    // move cursor to next line (next row)
}