

#include <stdio.h>
#include <malloc.h>


struct treeRepresentation
{
  int data;
  struct treeRepresentation* left;
  struct treeRepresentation* right;
  
};

struct treeRepresentation* createTree(int data )
{
    struct treeRepresentation *p;
    p = (struct treeRepresentation *) malloc (sizeof(struct treeRepresentation));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
    
};

void preOderTravarsal(struct treeRepresentation *a){
    if (a != NULL)
    {
    printf("%d",a->data);
    preOderTravarsal(a->left);
    preOderTravarsal(a->right); 
    };
    
    
};
void postOderTravarsal(struct treeRepresentation *a){
    if (a != NULL)
    {
        postOderTravarsal(a->left);
        postOderTravarsal(a->right);
        printf("%d",a->data);
    
    };
    
    
};
void inOderTravarsal(struct treeRepresentation *a){
    if (a != NULL)
    {
        inOderTravarsal(a->left);
        printf("%d",a->data);
        inOderTravarsal(a->right);
    
    };
    
    
};


int main()
{

    struct treeRepresentation *h = createTree(2);
    struct treeRepresentation *h1 = createTree(3);
    struct treeRepresentation *h2 = createTree(4);
    struct treeRepresentation *h3 = createTree(5);

    h->left = h1;
    h->right = h2;

    h1->left = h3;
    h1->right = NULL;

    h2->left = NULL;
    h2->right = NULL;


    preOderTravarsal(h);
    printf("\n");
    postOderTravarsal(h);
    printf("\n");
    inOderTravarsal(h);
    
    


    return 0;
}