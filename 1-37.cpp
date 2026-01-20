#include <iostream>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[10] = {7, 2, 9, 1, 5, 10, 3, 8, 6, 4};
    std::cout << "Unsorted array: \n";
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
    insertionSort(arr, sizeof(arr) / sizeof(arr[0]));
    std::cout << "Sorted array: \n";
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
}