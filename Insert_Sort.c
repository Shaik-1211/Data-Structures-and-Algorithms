#include<stdio.h>

void display(int a[],int size)
{   int i=0;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertsort(int a[],int size)
{
    int i;
    int j;
    for(i=1;i<size;i++)
    {   int temp;
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {   a[j+1]=a[j];  
            j--;
        }
         a[j+1]=temp;
    }
}
int main()
{
    int a[]={8,2,9,3,4,6};
    int size=sizeof(a)/sizeof(int);
    // printf(" size of array is %d\n",size);
    display(a,size);
    insertsort(a,size);
    printf("\nArray after sorting is\n");
    display(a,size); 
    return 0;
}