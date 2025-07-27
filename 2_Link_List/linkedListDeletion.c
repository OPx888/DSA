#include <stdio.h>
#include <stdlib.h>



struct node
{
    int data;
    struct node* next;

};

void displayNode(struct node* ptr)
{
    while (ptr != NULL)
    {
    printf("Element : %d\n",ptr->data);
    ptr = ptr->next;
    }
}


int main()
{
   struct node* first;
   struct node* second;
   struct node* third;
   struct node* fourth;
   struct node* fifth;

   first = (struct node*) malloc(sizeof(struct node)) ;
   second = (struct node*) malloc(sizeof(struct node)); 
   third = (struct node*) malloc(sizeof(struct node)); 
   fourth = (struct node*) malloc(sizeof(struct node)); 
   fifth = (struct node*) malloc(sizeof(struct node));
   

   first->data = 1;
   first->next = second;

   second->data = 2;
   second->next = third;

   third->data = 3;
   third->next = fourth;

   fourth->data = 4;
   fourth->next = fifth;

   fifth->data = 5;
   fifth->next = NULL;

   displayNode(first);
    


    return 0;
}