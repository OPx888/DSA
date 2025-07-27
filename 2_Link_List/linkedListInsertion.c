#include <stdio.h>
#include <stdlib.h>



struct link
{
    int data;
    struct link* next;
};

void displayList(struct link* ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}



int main()
{


    struct link* first;
    struct link* second;
    struct link* third;
    struct link* fourth;
    struct link* fifth;
    struct link* sixth;
    struct link* seventh;
    struct link* eighth;
    struct link* nineth;

    first = (struct link*) malloc(sizeof(struct link));
    second = (struct link*) malloc(sizeof(struct link));
    third = (struct link*) malloc(sizeof(struct link));
    fourth = (struct link*) malloc(sizeof(struct link));
    fifth = (struct link*) malloc(sizeof(struct link));
    sixth = (struct link*) malloc(sizeof(struct link));
    eighth = (struct link*) malloc(sizeof(struct link));
    nineth = (struct link*) malloc(sizeof(struct link));
    
    first->data = 10 ;
    first->next = second;
    
    second->data = 20 ;
    second->next = third;
    
    third->data = 30;
    third->next = fourth;
    
    fourth->data = 40 ;
    fourth->next = fifth;
    
    fifth->data = 50 ;
    fifth->next = sixth;
    
    sixth->data = 60 ;
    sixth->next = seventh;
    
    seventh->data = 70 ;
    seventh->next = eighth;
    
    eighth->data = 80 ;
    eighth->next = nineth;
    
    nineth->data = 90 ;
    nineth->next = NULL; 

    displayList(first);


    return 0;
}