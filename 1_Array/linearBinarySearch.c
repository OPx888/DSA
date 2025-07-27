#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
          return i;  
        }
   
    }
       return -1;
    
}

int binarySearch(int arr[],int size, int element )
{
    int high , low , mid;
    high = size-1;
    low = 0;
   
    while (low<=high)
    {
         mid = (high + low )/2;

        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]>element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1 ;
        }
    }
    

}

int main()
{
//     int numArr[] = {47,39,98,34,64,34,64,343,634,3434};
//     int size = sizeof(numArr)/sizeof(int);
//     int a ;

//     printf("what number you want to find : " );
//     scanf("%d",&a);

//      int searchIndex = linearSearch(numArr,size,a);
//     printf("%d element found in %d index ",a,searchIndex);
    
    // binarySearch 
    int sortedArr[] = { 2,5,7,98,239,543,643,873,987};
    int binarysize = sizeof(sortedArr)/sizeof(int);
    int b ;
    
    printf("What element you want to find :");
    scanf("%d\n",&b);  

    int indexSearching = binarySearch(sortedArr,binarysize,b);
    printf("%d element found in %d index",b,indexSearching);

    return 0;
}