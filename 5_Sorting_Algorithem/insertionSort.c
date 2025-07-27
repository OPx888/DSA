#include <stdio.h>



void displayArr(int * arr , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void insertionSort(int *arr , int n){
    for (int i = 1; i < n; i++)
    {
        int key = i;
        int j = i-1;
        while (arr[j] > key && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
    
}

int main()
{


    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = 9;
    displayArr(arr,n);
    insertionSort(arr,n);
    displayArr(arr,n);



    return 0;
}