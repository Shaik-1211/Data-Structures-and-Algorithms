#include<stdio.h>
#include<stdlib.h>

void printarray(int a[],int size)
{   int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void countsort(int a[],int size)
{   int i,j,max;
    // a[0]=max;
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int *count=(int *)malloc((max+1)*sizeof(int));
    for(i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    for(i=0;i<size;i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    i=j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int a[]={12,5,65,88,75,13,9};
    int size=sizeof(a)/sizeof(int);
    printarray(a,size);
    countsort(a,size);
    printarray(a,size);
    return 0;
}