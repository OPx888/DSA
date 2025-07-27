#include <stdio.h>
#include <stdlib.h>



struct stack {
    int top;
    int size;
    char * ptr;
};

int isEmpty(struct stack*ptr){
    if (ptr->top < 0 )
    {
        return 1;
    }else {
        return 0;
    }
    
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }else{  
    return 0;
    }
}

void puss(struct stack* ptr , char x){
if (isFull(ptr))
{
    printf("Stack overflow \n");
}else{
    
    ptr->top++;
    ptr->ptr[ptr->top] = x;
}

}

void pull(struct stack *ptr ){
    if (isEmpty(ptr))
    {
        printf("Stack is underflow \n");
    }else{
        ptr->top--;
    }
}

int pranthisiMatching(char * exp){
    struct stack * arr ;
    arr->size = 20;
    arr->ptr = (char*)malloc(arr->size* sizeof(char));
    arr->top = -1;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            puss(arr,'(');
        }else if (exp [i] == ')')
        {
            if (isEmpty(arr))
            {
                return 0;
            }else{
             pull(arr);

            }
        }
        
        
    }
    if (isEmpty(arr))
    {
        return 1;
    }return 0; 
    
}

int main()
{


       char * str = "6*(((3+5)))";
       if (pranthisiMatching(str))
       {
           printf("Parenthesis Match \n");
       }else{
           printf("Pranthesis not Match \n");
       }
   

    return 0;
}