#include <stdio.h>

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbalSort(int *arr, int n)
{
    int temp;
    int sorted = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int sorted = 1;
        printf("Pass No :- %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 0;
            }
            if (sorted)
            {
                return;
            }
        }
    }
}

int main()
{

    int arr[] = {8, 5, 6, 4, 3, 7, 1, 9, 2};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    // displayArray(arr,n) ;
    // bubbalSort(arr,n);
    // displayArray(arr,n);

    bubbalSort(arr2, n);
    displayArray(arr2, n);

    return 0;
}