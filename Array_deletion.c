#include<stdio.h>
int display(int arr[],int size);
void deletion(int arr[],int size,int index);
int main()
{
    int arr[50]={12,45,23,56,45,58};
    int size=6,index=4;
    display(arr,size);
    deletion(arr,size,index);
    size -=1;
    printf("The elements after deletion are \n");
    display(arr,size);
    return 0;
}
int display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        // printf("The element at arr[%d] is %d\n",i,arr[i]);
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[],int size,int index)
{
    int i;
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}