#include <stdio.h>

void arrayShow(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

void arrayDelition(int arr[] , int size , int index)
{
    for (int i = index; i <=size-1; i++)
    {
        arr[index] = arr[index+1];
    }
    
}

int main()
{
    int arr[100] = { 53,34,634,34,34};
    printf("Array befor deletion :\n");
    int capasity = 100;
    int size = 5;
    arrayShow(arr,size);

    int index;
    printf("Enter index number : \n",index);
    scanf("%d",&index);
    
    arrayDelition(arr,size,index);
    size--;

    printf("Array after deletion :\n");
    arrayShow(arr,size);



    return 0;
}