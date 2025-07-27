#include <stdio.h>


void showArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int arrayInsertion(int arr[],int size , int capacity, int index , int insertNum){
    if (size>=capacity)
    {
        return 0;
    }else{
        for (int i = size-1; i >= index; i--)
        {
            arr[i+1] = arr[i];

        }
        arr[index] = insertNum;
        return 1;
    }
    
}

int main()
{
    int arr[100] = {56,34,54,342};
     int size = 4 ; 
     int capacity = 100;
     int index = 3;
     int insertNum = 6;
     
    showArray(arr,size);

    arrayInsertion(arr , size , capacity , index , insertNum );
    size++;
    printf("After insertion \n");
    showArray(arr,size);
   

    return 0;
}