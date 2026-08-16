#include <stdio.h>

void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// void insertion_sort(int *arr, int len)
// {
//     for (int i = 1; i < len; i++)
//     {
//         int insert_idx = i;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[i] < arr[j])
//             {
//                 insert_idx = j;
//                 break;
//             }
//         }
//         if (insert_idx != i)
//         {
//             int tmp = arr[i];
//             for (int j = i; j > insert_idx; j--)
//             {
//                 arr[j] = arr[j - 1];
//             }
//             arr[insert_idx] = tmp;
//         }
//     }
// }
void insertion_sort(int *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
}
int main()
{
    int size = 10;
    int arr[10] = {8, 1, 3, 4, 2, 10, 5, 7, 6, 9};
    insertion_sort(arr, size);
    print_arr(arr, size);

    return 0;
}