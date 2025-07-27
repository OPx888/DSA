#include <stdio.h>
#include <stdlib.h>



struct queue {
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct queue * q){
    if (q->f == q->r)
    {
        return 1;
    }else return 0;
    
}

int isFull(struct queue* q){
    if (q->r == q->size-1)
    {
        return 1;
    }else return 0;
    
}

void equeue(struct queue * q , int val){
    if (isFull(q))
    {
        printf("Queue is full you can't puss element \n");
    }else{
        q->r++;
        q->arr[q->r] = val;
    }
    
}

int dequeue(struct queue * q){
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is empty you can't pop element \n");
    }else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}


int main()
{
       struct queue * queen;
       queen->size = 3;
       queen->f = -1;
       queen->r = -1;
       queen->arr = (int*)malloc(queen->size * sizeof(int));

       printf("%d\n",isEmpty(queen));
       printf("%d\n",isFull(queen));

       equeue(queen,34);
       equeue(queen,65);
       equeue(queen,90);

       printf("%d\n",isEmpty(queen));
       printf("%d\n",isFull(queen));


    


    return 0;
}