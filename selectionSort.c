#include<stdio.h>
#include<stdlib.h>
static int count ;
void printArray(int *arr,int n)
{
    int i;
    for(i=0; i<=(n-1); i++)
        printf("%d ",*(arr+i));

}
void selectionSort(int *arr, int num)
{
    int i, j, min ,temp;
    count++;
    for (i = 0; i < num-1; i++)
    {
        count++;
        min = i ;
        count++;
        for (j = i+1; j < num; j++){
        count++ ;
          if (arr[j] < arr[min])
            min = j;
        count++;
        count++;
        }
        temp = arr[i] ;
        count++ ;
        arr[i] = arr[min] ;
        count++ ;
        arr[min] = temp ;
        count++ ;
    }
    count++ ;
}

void main()
{
    int *arr,n ;
    int i;
    printf("\nEnter the size of Array\n") ;
    scanf("%d",&n) ;
    arr = (int *)malloc(sizeof(int)*n) ;
    printf("\nEnter the elements \n");
    for(i=0; i<=(n-1); i++)
        scanf("%d",(arr+i));
    printArray(arr,n);
    printf("\nArray after sorting :\n");
    selectionSort(arr,n) ;
    printArray(arr,n);
    printf("\n%d\n",count) ;
}
