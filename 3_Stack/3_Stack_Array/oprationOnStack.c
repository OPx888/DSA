#include <stdio.h>
#include <stdlib.h>



struct stack {
    int top;
    int size;
    int* arr;
};

int full(struct stack * ptr){
    if (ptr->top == ptr->size -1)
    {
        return 1;
    }else{
       return 0;
    }
    
}
int empty(struct stack * ptr){
    if (ptr->top == ptr->size -1)
    {
        return 1;
    }else{
        return 0;
    }
    
}


void puss(struct stack * ptr , int value ){

    if (full(ptr))
    {
        printf("Stack is full you can't enter values!");

    }else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
    

}

void pull(struct stack *ptr){
    if (ptr->top < 0)
    {
        printf("Stack is empty you can't pull");
    }else{
          ptr->arr[ptr->top] = 0;
          ptr->top--;
    }
    
}



int main()
{


     struct stack *str;
     str->size = 6;
     str->top = -1;
     str->arr = (int*)malloc(sizeof(int));
    
    puss(str,30);
    puss(str,30);
    puss(str,30);
    puss(str,30);
    puss(str,30);
    puss(str,30);
   
   pull(str);
   pull(str);
   pull(str);
   pull(str);
   pull(str);
   pull(str);

puss(str,30);
puss(str,30);
puss(str,30);
puss(str,30);
puss(str,30);
puss(str,30);
puss(str,30);



    return 0;
}