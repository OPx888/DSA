#include <stdio.h>
#include <stdlib.h>



struct stack {
    int data;
    struct stack* next;
};



int isEmpty(struct stack*top){
    if (top == NULL)
    {
        return 1;
    }return 0;
    
}

int isFull(struct stack* top){
    struct stack* temp = (struct stack*) malloc(sizeof(struct stack));
    if (temp == NULL){
        return 1;
    }return 0;
}



struct stack* push( struct stack* top, int x){

if (isFull(top))

{
    printf("Stack ovrflow\n");
}else{
    struct stack*n = (struct stack*) malloc(sizeof(struct stack));
    n->data = x;
    n->next = top;
    top = n;
    return top;
}

}

int pop (struct stack ** top){
    if (isEmpty(*top))
    {
        printf("Stack underFlow");
    }else{
        struct stack* n = (*top);
        (*top) = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
    
}

void display(struct stack* ptr){

    while (ptr->next != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;

    }
    
}

int main()
{
    struct stack* top = NULL;

     top = push(top,88);
     top = push(top,54);
     top = push(top,65);
     top = push(top,78);
     top = push(top,23);
     top = push(top,12);

     
     display(top);
     printf("%d Element Poped \n",pop(&top));
     display(top);



    return 0;
}

