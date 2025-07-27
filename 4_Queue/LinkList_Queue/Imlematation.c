#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void likiListTraversal(struct node *ptr)
{
    printf("Printing LinkList Element :- \n");
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty()
{
    if (f == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void Equeue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is full \n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int var = -1;
    struct node *ptr = f;
    if (isEmpty(f))
    {
        printf("Queue is Empty \n");
    }
    else
    {
        f = f->next;
        var = f->data;
        free(ptr);
    }
    return var;
}
int main()
{

    

    Equeue(78);
    Equeue(65);
    Equeue(32);
    Equeue(54);
    Equeue(87);
    Equeue(32);
    Equeue(65);
    Equeue(24);

    printf("Dequeue Element is :- %d\n", dequeue());
    printf("Dequeue Element is :- %d\n", dequeue());
    printf("Dequeue Element is :- %d\n", dequeue());
    likiListTraversal(f);

    return 0;
}