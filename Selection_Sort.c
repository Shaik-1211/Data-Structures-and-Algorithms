#include<stdio.h>

void display(int A[],int size)
{   int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
}
void selectionsort(int A[],int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        int min=i;
        for(j=i+1;j<size;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp;
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}
int main()
{
    int A[]={12,9,59,4,55,15,0};
    int size=sizeof(A)/sizeof(int);
    printf("elements before sorting \n");
    display(A,size);
    selectionsort(A,size);
    printf("\nelements after sorting \n");
    display(A,size);
    return 0;
}