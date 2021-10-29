#include<stdio.h>
void display(int arr[],int size);
int insertion(int arr[],int size,int element,int index,int capacity);
int main()
{    int arr[5]={23,245,12,45,35};
    int size=5,element=90,index=4,capacity=50;
    display(arr,size);
    insertion(arr,size,element,index,capacity);
    size +=1;
    display(arr,size);
    return 0;
}
void display(int arr[],int size)
{
    int i;
    printf("The elements are \n");
    for(i=0;i<size;i++)
    {
        printf("The element at arr[%d] is %d\n",i,arr[i]);
    }
    printf("\n");
}

int insertion(int arr[],int size,int element,int index,int capacity)
{   int i;
    if(size>=capacity)
    {
        return -1;
    }
    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}