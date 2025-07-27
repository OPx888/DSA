#include <stdio.h>
#include <stdlib.h>



struct queue {
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue* q ){
    if (q->f == q->r)
    {
        return 1;
    }else return 0;
    
}

int isFull(struct queue* q){
    if ((q->r+1)%q->size == q->f)
    {
        return 1;
    }else return 0;
    
}

void Equeue(struct queue* q , int val){
    if (isFull(q))
    {
        printf("Queue is already full \n");
    }else{
        q->r = (q->r+1)%q->size ++;
        q->arr[q->r] = val;
    }
    
}

int Dequeue(struct queue* q ){
    int x = -1;
    if (isEmpty(q))
    {
        printf("Queue is already emptyr \n");
    }else{
       
       q->f = (q->f+1)%q->size ++;
       x = q->arr[q->f];
    }
    return x;
    
}

int main()
{

struct queue * queen ;
queen->size = 5;
queen->f = 0;
queen->r = 0;
queen->arr = (int*)malloc(queen->size * sizeof(int));


printf("%d\n",isEmpty(queen));
printf("%d\n",isFull(queen));

Equeue(queen,56);
Equeue(queen,98);
Equeue(queen,23);
Equeue(queen,74);
Equeue(queen,41);
Equeue(queen,41);
Equeue(queen,41);

printf("%d\n",isEmpty(queen));
printf("%d\n",isFull(queen));

    return 0;
}