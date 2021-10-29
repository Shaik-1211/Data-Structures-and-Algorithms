#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a,int tsize,int usize){
//     (*a).total_size =tsize;
//     (*a).used_size = usize;
//     (*a).ptr = (int *)malloc(tsize*sizeof(int)); 
        a->total_size = tsize;
        a->used_size = usize;
        a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myArray *a){
    printf("entered elements are \n");
    for(int i=0;i < a->used_size;i++)
    {  
        printf("%d\n",(a->ptr)[i]);


    }
}
void setval(struct myArray *a){
    int n; 
    for(int i=0;i< a->used_size;i++)
    {
        printf("enter element ");
        scanf("%d",&(a->ptr)[i]);
       


    }
}

int main()
{
    struct myArray marks;
    createArray(&marks,30,5);
    setval(&marks);
    show(&marks);

    return 0;
}