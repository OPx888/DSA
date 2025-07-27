#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a ,int  tSize , int uSize ){
   (*a).total_size = tSize;
   (*a).used_size = uSize;
   (*a).ptr = (int *)malloc(tSize * sizeof(int ));

}

void setArray(struct myArray *a){
    int n ;
   for (int i = 0; i < (*a).used_size; i++)
   {
    printf("Enter arraValue :",i);
    scanf("%d",&n );
    (*a).ptr[i]=n;
   }
}
void showArray(struct myArray *a){
   for (int i = 0; i < (*a).used_size; i++)
   {
    printf("%d\n", (*a).ptr[i]);

   }
}   

int main()
{
    struct myArray marks;
    createArray(&marks, 10,2);
    printf("setting value :\n");
    setArray(&marks);
    printf("showing value :\n");
    showArray(&marks);




    return 0;
}