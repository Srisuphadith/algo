#include <stdio.h>

void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        print_arr(arr, len);
    }
}

int main()
{
    int size = 10;
    int arr[10] = {8, 1, 3, 4, 2, 10, 5, 7, 6, 9};
    bubble_sort(arr, size);

    return 0;
}