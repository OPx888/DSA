#include <stdio.h>

void displayArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int n)
{
    int temp , min ;
    for (int i = 0; i < n - 1; i++)
    {
         min = i;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                min = j;
            }
          
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
}

int main()
{

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;
    displayArr(arr, n);
    selectionSort(arr, n);
    displayArr(arr, n);

    return 0;
}