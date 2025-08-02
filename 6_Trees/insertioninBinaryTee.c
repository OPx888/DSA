#include <stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* h ;
    h  = (struct node* ) malloc(sizeof(struct node));
   h->data = data;
   h->left = NULL;
   h->right = NULL;
   return h;
}

void inOrderTraversal(struct node* s){
    if (s != NULL)
    {
    inOrderTraversal(s->left);
    printf("%d", s->data );
    inOrderTraversal(s->right); 
    }
    
   
}

struct node* search(struct node* s , int value){
    if (s != NULL)          
    {
        if (s->data == value)
        {
            return s;
        };
        if (s->data <= value)
        {
            return search(s->right , value);
        }else{
            return search(s->left, value);
        }
        
        
    }else{
        return NULL ;
    }
    
}

void insertion(struct node* root , int value){
    struct node* prev = NULL ;
    while (root != NULL) {
     prev = root;
     if (value == root->data)
    {
        return;
    }else if (value<=root->data)
    {
        root = root->left;
    }else{
        root = root->right;
    }

   
   }
    struct node* new = createNode(value);
    if (value<=prev->data)
    {
        prev->left = new;
    }else{
        prev->right = new;
    }
    
}




int main()
{

    struct node* h = createNode(50);
    struct node* h1 = createNode(21);
    struct node* h2 = createNode(74);

    struct node* h3 = createNode(16);
    struct node* h4 = createNode(31);

    struct node* h5 = createNode(60);
    struct node* h6 = createNode(98);

    struct node* h7 = createNode(5);
    struct node* h8 = createNode(18);

    struct node* h9 = createNode(102);

    h->left = h1;
    h->right = h2;

    h1->left = h3;
    h1->right = h4;

    h2->left = h5;
    h2->right = h6;

    h3->left = h7;
    h3->right = h8;

    h4->left = NULL;
    h4->right = NULL;

    h5->left = NULL;
    h5->right = NULL;

    h7->left = NULL;
    h7->right = NULL;

    h8->left = NULL;
    h8->right = NULL;

    h6->right = h9;
    h6->left = NULL;

    h9->left = NULL;
    h9->right = NULL;


     insertion(h,96);
   struct node* s = search(h,34);
   if (s!=NULL)
   {
    printf("%d",s->data);
   }else{
    printf("Element not found");
   }
   
   inOrderTraversal(h);
 
   
    


    return 0;
}