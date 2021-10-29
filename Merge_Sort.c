#include<stdio.h>

void display(int a[],int size)
{   int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
int merge(int a[],int low,int mid,int high)
{   int i,j,k;
     i=low;
     j=mid+1;
     k=low;
    int b[high+1];
    {
        while(i<=mid&&j<=high)
        {
            if(a[i]<=a[j])
            {
                b[k]=a[i];
                i++;
            }
            else
            {
                b[k]=a[j];
                j++;
            }
            k++;
        }
        while(i<=mid)
        {   
            b[k]=a[i];
            k++;
            i++;

        }
        while(j<=high)
        {  
            b[k]=a[j];
             k++;
            j++;
        }
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
int mergesort(int a[],int low,int high)
{ //   int b[50];
     if(low<high)
    {  int mid;
       mid=(low+high)/2;
       mergesort(a,low,mid);
       mergesort(a,mid+1,high);
       merge(a,low,mid,high);

    }
    // return a;
}
int main()
{
    int a[]={12,5,66,98,7,35,29,13};
    int size=sizeof(a)/sizeof(int);
    // int b[size];
    
    display(a,size);
    mergesort(a,0,size-1);
    printf("\nafter sorting \n");
    display(a,size);
    return 0;
}