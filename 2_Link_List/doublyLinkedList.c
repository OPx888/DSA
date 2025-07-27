#include <stdio.h>



struct node
{  
    int data;
    struct node* next;
    struct node* previous;
};


void display(struct node* ptr){


while ( ptr != NULL)
{
    if(ptr != NULL){ 
  printf("Element : %d\n",ptr ->data);
  ptr = ptr->next;
    }
    else{
      
    }
}


}


int main()
{

   struct node* first;
   struct node* second;
   struct node* third;
   struct node* fourth;

   first = (struct node*) malloc(sizeof(struct node));
   second = (struct node*) malloc(sizeof(struct node));
   third = (struct node*) malloc(sizeof(struct node));
   fourth = (struct node*) malloc(sizeof(struct node));
   
    
   first ->data = 11;
   first->previous = NULL;
   first->next = second;

   second ->data = 12;
   second->previous = first;
   second->next = third;

   third ->data = 13;
   third->previous = second;
   third->next = fourth;

   fourth ->data = 14;
   fourth->previous = third;
   fourth->next = NULL;

  display(first);

    return 0;
}