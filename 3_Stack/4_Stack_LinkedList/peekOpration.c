#include <stdio.h>
#include <stdlib.h>




struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

int isEmpty (struct node *top){
    if (top == NULL)
    {
       return 1;
    }return 0;
    
}

int isFull(struct node* top){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }return 0;
    
}

struct node* puss(struct node* top, int x){
    if (isFull(top))
    {
        printf("Stack overflow");
    }else{
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return n;
    }
    
}



void printStuck(struct node* ptr){

    while (ptr->next != NULL)
    {
        printf("Element %d\n",ptr->data);
    }
    
}

int main()
{


top = puss(top,45);
top = puss(top,78);
top = puss(top,65);
top = puss(top,23);
top = puss(top,85);
top = puss(top,98);
top = puss(top,36);

printStuck(top);
printf("Omprakash");
    


    return 0;
}