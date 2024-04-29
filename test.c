#include "sort.h"
int main()
{
    int arr[] = {4, 5, 2, 6, 1, 0, 8};
    int len = (sizeof(arr) / sizeof(arr[1]));
    int i, j;
    int temp;

    for (i = 0; i < len; i++)
    {
        printf("%d ,", arr[i]);
    }
    putchar('\n');
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] == arr[j + 1];
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
}