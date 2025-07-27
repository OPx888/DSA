#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkList(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
    

}


int main()
{
    // Creating nodes 
    struct Node* abov;
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory for Nodes 
    abov = (struct Node*) malloc(sizeof(struct Node));
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    
    // Link abov & head
    abov->data = 5 ;
    abov->next = head;

    // Link head & second node
    head->data = 7 ;
    head->next = second;

    // Link second & third node
    second->data = 11;
    second->next = third;

    // Terminate list at end of node 
    third->data = 66;
    third->next = NULL;

    linkList(abov);

    return 0;
}