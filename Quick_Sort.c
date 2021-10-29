#include<stdio.h>
void printarray(int a[],int size)
{   int i;
    while(i<size)
    {
        printf("%d ",a[i]);
        i++;
    }
}
int partition(int a[],int low,int high)
{
    int pivot =a[low];
    int i=low;
    int j=high;
    while (i<j)
    {   while(a[i]<=pivot)
        {
            i++;
        }
        while (a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int x;
            x=a[i];
            a[i]=a[j];
            a[j]=x;
        }
    }
    
    
        int temp;
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
    return j;
}
int quicksort(int a[],int low,int high)
{   int partitionindex;
    if(low<high)
    {
        partitionindex=partition(a,low,high);
        quicksort(a,low,partitionindex-1);
        quicksort(a,partitionindex+1,high);
    }
}
int main()
{
    int a[]={12,5,69,15,85,3,78};
    int size=sizeof(a)/sizeof(int);
    printarray(a,size);
    quicksort(a,0,size-1);
    printf("\nafter sorting\n");
    printarray(a,size);
    return 0;
}