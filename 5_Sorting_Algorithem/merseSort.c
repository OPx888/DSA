#include <stdio.h>

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergSort(int *arr, int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++, k++;
    }

    while (j <= high)
    {
        b[k] = arr[i];
        j++, k++;
    }

    for (int a = 0; a < high; a++)
    {
        arr[a] = b[a];
    }
}

void finalMerge(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high)/2;
        finalMerge(arr, low, mid);
        finalMerge(arr, mid + 1, high);
        mergSort(arr, low, mid, high);
    }
}

int main()
{

    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int l, h;
    h = 9;
    l = 0;

    int n = 9;
    displayArray(arr, n);
    finalMerge(arr, l, h);
    displayArray(arr, n);

    return 0;
}