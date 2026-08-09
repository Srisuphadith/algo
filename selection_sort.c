#include <stdio.h>
void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selection_sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int index_max = 0;
        int last = len - i - 1;
        for (int j = 1; j < len - i; j++)
        {
            if (arr[index_max] < arr[j])
            {
                index_max = j;
            }
        }
        if (index_max != len - i - 1)
        {
            int temp = arr[last];
            arr[last] = arr[index_max];
            arr[index_max] = temp;
            // print_arr(arr, len);
        }
    }
}

int main()
{
    int size = 10;
    int arr[10] = {8, 1, 3, 4, 2, 10, 5, 7, 6, 9};
    selection_sort(arr, size);

    return 0;
}