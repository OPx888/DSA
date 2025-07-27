#include <stdio.h>
#include <stdlib.h>


struct node {
    int size;
    int top;
    int* arr;
};

int empty(struct node * ptr){
    if (ptr->top < 0)  
    {
        return 1;
    }else{
        return 0;
    }
    
}

int full(struct node * ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int peek(struct node* ptr , int value){
    if (ptr->top - value <0 )
    {
       return -1;
    }else{
        return ptr->arr[ptr->top-value+1];
    }
    
}



int main()
{

struct node* teniceBall;
    teniceBall->size = 10;
    teniceBall->arr = (int*)malloc(sizeof(int));
    teniceBall->top = -1;

    teniceBall->arr[0] = 99;
    teniceBall->arr[1] = 35;
    teniceBall->arr[2] = 57;
    teniceBall->arr[3] = 99;
    teniceBall->arr[4] = 35;
    teniceBall->arr[5] = 58;
    teniceBall->arr[6] = 99;
    teniceBall->arr[7] = 35;
    teniceBall->arr[8] = 48;
    teniceBall->arr[9] = 45;

    teniceBall->top = 9;
    
//    int teniceBall_5 = peek(teniceBall,9);
//    printf("%d",teniceBall_5);

   for (int i = 1; i <= teniceBall->size-1 ; i++)
   {
    printf("in posion of %d is %d value",i,peek(teniceBall,i));
   }
   
    


    return 0;
}