#include<stdio.h>
#include<stdlib.h>
static int count ;
void swap(int *a , int *b)
{
    int ptr ;
    count++ ;
    ptr = *a ;
    count++ ;
    *a = *b ;
    count++ ;
    *b = ptr ;
    count++ ;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    count++ ;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    count++ ;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    count++ ;
    if (largest != i)
    {
        count++ ;
        swap(&(arr[i]), &(arr[largest]));
        count++ ;
        heapify(arr, n, largest);
        count++ ;
    }
    count++ ;
}

void heapSort(int arr[], int n)
{
    count ++ ;
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    count ++;
    for (int i=n-1; i>=0; i--)
    {
        count++ ;
        swap(&(arr[0]), &(arr[i]));
        count++ ;
        heapify(arr, i, 0);
        count++ ;
    }
    count++ ;
}

/* function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i] );
    }
    printf("\n");
}


int main()
{
    int *arr ;
    int n ;
    int i;
    printf("\n Enter the size of array \n");
    scanf("%d",&n) ;
    arr = (int *)malloc(sizeof(int)*n) ;
    printf("\nEnter the elements \n") ;
    for(i=0;i<=(n-1);i++)
        scanf("%d",(arr+i)) ;
    printf("\n Array is : \n") ;
    printArray(arr,n);
    heapSort(arr, n);
    printf("\nSorted Array \n") ;
    printArray(arr, n);
    printf("\ncount :%d\n",count) ;
}
