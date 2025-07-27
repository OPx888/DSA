#include <stdio.h>
#include <stdlib.h>



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
int pranthesisMatch(char* abc){
    struct stak * str ;
    str->size = 100;
    str->top = -1;
    str->arr = (char*)malloc(str->size * sizeof(char));
    
    for (int i = 0; abc[i] != '\0'; i++)
    {
        char pull_char;
        if (abc[i] == '('|| abc[i] == '['|| abc[i] == '{')
        {
            puss(str,abc[i]);
        }else if (abc[i] == ')'|| abc[i] == ']'|| abc[i] == '}'){
            if (isEmpty(str))
            {
                return 0;
            }else{
                pull_char = pull(str);
                if (!match(pull_char,abc[i]))
                {
                    return 0;
                }
                
            }
            
        }
        
    }
    if (isEmpty(str))
    {
        return 1;
    }else return 0;
    
    
};




int main()
{

   char * str = "4*{65=43(23[34])}";
 
   if (pranthesisMatch(str))
   {
       printf("Pranthesis Match\n");
   }else{
       printf("Pranthesis not Match\n");
   }
  

    return 0;
}