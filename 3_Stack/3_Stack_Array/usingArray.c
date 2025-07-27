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

int main()
{


    struct node* teniceBall;
    teniceBall->size = 10;
    teniceBall->arr = (int*)malloc(sizeof(int));
    teniceBall->top = -1;

    teniceBall->arr[0] = 99;
    teniceBall->arr[1] = 35;
    teniceBall->arr[2] = 56;
    teniceBall->arr[3] = 99;
    teniceBall->arr[4] = 35;
    teniceBall->arr[5] = 56;
    teniceBall->arr[6] = 99;
    teniceBall->arr[7] = 35;
    teniceBall->arr[8] = 56;
    teniceBall->arr[9] = 45;
    
    teniceBall->top = 9;

    if (empty(teniceBall))
    {
        printf("Stack is empty");
    }else{
        printf("Stack is not empty");
    }
printf("\n");
    if (full(teniceBall))
    {
        printf("Stack is full");
    }else{
        printf("Stack is not full");
    }
    
    
    


    return 0;
}