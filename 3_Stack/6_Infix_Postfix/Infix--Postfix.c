#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct stak {
    int size;
    int top;
    char * arr;
};

int isEmpty(struct stak* ptr){
    if (ptr->top < 0)
    {
        return 1;
    }else return 0;
    
}

int isFull(struct stak * ptr){
    if (ptr->top == ptr->size)
    {
        return 1;
    }else return 0;
    
}
void puss(struct stak* ptr , char x){
    if (isFull(ptr))
    {
        printf("Stak is overflow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = x;
    }
    
}

char pull (struct stak * ptr){
    if (isEmpty(ptr))
    {
        printf("Stak is underFlow\n");
        return -1;
    }else{
        char x = ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
    
}

char Top(struct stak* ptr){
    return ptr->arr[ptr->top];
}

int match(char a, char b){
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }else return 0;
    
}

int precedence(char ch){
    if (ch == '/' || ch == '*' )
        {
        return 3;
    }else if(ch == '+' || ch == '-'){
        return 2;
    }else{
        return 0;
    }

}

int isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '/' || ch == '*')
    {
        return 1;
    }else {
    return 0;
    }   
}

char * infixToPostfix(char * infix){
    struct stak * sp = (struct stak *) malloc(sizeof(struct stak));
    sp->size = 40;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * (sizeof(char)));
    char * postfix = (char*)malloc(strlen((infix)+1) * (sizeof(char)));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }else{
            if (precedence(infix[i])>precedence(Top(sp)))
            {
                puss(sp,infix[i]);
            }else{
                postfix[j] = pull(sp);
                j++;
            }
            
        }
        
    }
    

while (!isEmpty(sp))
{
    postfix[j] = pull(sp);
    j++;
}
postfix[j] = '\0';
return postfix;
}

int main()
{
   
   char * infix = "a+b-c/t";
   printf("Infix :- %s  To  Postfix :- \n", infix);
   infixToPostfix(infix);
   printf("Infix");
   
   

    return 0;
}