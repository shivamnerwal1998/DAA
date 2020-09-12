#include<stdio.h>
#include<stdlib.h>

static int count ;


void printArray(int *arr,int n)
{
    int i;
    for(i=0; i<=(n-1); i++)
        printf("%d ",*(arr+i));

}
int partetion_random(int arr[], int lb, int ub)
{
    int temp ;
    count++ ;
    srand(time(NULL));
    count++ ;
    int random = lb + rand() % (ub - lb);
    count++;
    temp = arr[random] ;
    count++;
    arr[random] = arr[ub] ;
    count++;
    arr[ub] = temp ;
    count++;
    return partetion(arr, lb, ub);
}
int partetion(int *arr,int lb,int ub)
{
    int j ;
    int temp ;
    int pivot = arr[ub] ;
    int i = lb - 1 ;
    count++;
    for(j=lb ;j <= ub-1; j++)
    {
        count++;
        if(arr[j] <= pivot)
        {
            count++;
            i++;
            temp = arr[i] ;
            count++;
            arr[i] = arr[j] ;
            count++;
            arr[j] = temp;
            count++;

        }
        count++;

    }
    count++;
    temp = arr[i+1];
    count++;
    arr[i+1] = arr[ub] ;
    count++;
    arr[ub] = temp ;
    count++ ;
    return i+1;
}
void quickSort(int *arr,int lb,int ub)
{
    count++;
    int pivot ;
    if(lb < ub)
    {
        count++;
        pivot = partetion_random(arr,lb,ub) ;
        count++ ;
        quickSort(arr,lb,pivot-1);
        count++ ;
        quickSort(arr,pivot+1,ub);
        count++;
    }
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
    quickSort(arr,0,n-1);
    printf("\nArray after sorting :\n");
    printArray(arr,n);
    printf("\n%d\n",count) ;
}
