#include <stdio.h>
void display(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf(" %d ", A[i]);
    }
}
void bubblesort(int A[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int a = A[j];
                A[j] = A[j + 1];
                A[j + 1] = a;
                flag == 1;
            }
        }
        if (flag != 0)
        {
            break;
        }
    }
}
int main()
{
    int A[] = {12,1, 56, 67,12, 98, 10, 5};
    int size;
    size = sizeof(A) / sizeof(int);
    printf("Array before sorting is \n");
    display(A, size);
    bubblesort(A, size);
    printf("\nAfter sorting the array is \n");
    display(A,size);
    return 0;
}