#include <stdio.h>
#include <stdlib.h>


void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maxArr(int * arr , int n){
    int max = 0 ;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
    
}

void countSort(int * arr, int n ){
    int i,j; 
    int max = maxArr(arr,n);

    int * count = (int*) malloc((max+1)*sizeof(int));
    for ( i = 0; i <= max ; i++)
    {
       count[i] = 0;
    }
    

    for ( i = 0; i < n ; i++)
    {
        count[arr[i]] = count[arr[i]] +1 ;
    }

    i = j = 0;
    
    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i]--;
            j++;
        }{
            i++;
        }
        
    }
    
    
}

int main()
{

    int arr[] = {8, 5, 6, 4, 3, 7, 1, 9, 2};
    int n = 9;
    // printf("%d\n",maxArr(arr,n));
    displayArray(arr,n);
    countSort(arr,n);
    displayArray(arr,n);


    return 0;
}