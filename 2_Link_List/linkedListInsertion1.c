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
    
    
};

struct Node* headInsertion (struct Node* head ,int data  )
{
  struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;

};

struct Node* indexInsertion (struct Node* head , int data , int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
    
}

struct Node* endInsertion(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    
    return NULL;
    
};

struct Node* afterInsertion(struct Node* head, struct Node* previosNode , int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = previosNode->next;
    previosNode->next = ptr;

    return head;
}


int main()
{
    // Creating nodes 
    
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory for Nodes 

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    
   

    // Link head & second node
    head->data = 7 ;
    head->next = second;

    // Link second & third node
    second->data = 11;
    second->next = third;

    // Terminate list at end of node 
    third->data = 66;
    third->next = NULL;

    linkList(head);
    printf("\n");

    head = headInsertion(head,99);
    linkList(head);
    printf("\n");

    head = headInsertion(head , 88);
    linkList(head);
    printf("\n");

    indexInsertion(head, 77,2);
    linkList(head);
    printf("\n");

    endInsertion(head,111);
    linkList(head);
    printf("\n");

    afterInsertion(head,third,22);
    linkList(head);
    printf("\n");



    return 0;
}