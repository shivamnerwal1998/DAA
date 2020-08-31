#include<stdio.h>
#include<stdlib.h>
int num ;
static int count ;

void printArray(int *arr,int num)
{
    int i;
    for(i=0; i<=(num-1); i++)
        printf("%d\t",*(arr+i));
}
void mergeArray(int *arr,int lb,int mid,int ub)
{
    int i = lb ;
    int j = mid+1 ;
    int k = lb ;
    int c[num];

    count++;
    while((i <= mid) && (j <= ub))
    {
        count++;
        if(arr[i] <= arr[j])
        {
            count++;
            c[k] = arr[i] ;
            count++;
            i++ ;
            count++;
        }
        else{
            count++;
            c[k] = arr[j]  ;
            count++;
            j++;
            count++;
        }
        count++;
        k++;
        count++;
    }
    count++;
    if( i > mid)
    {
        count++;
        while(j <= ub){
                count++;
            c[k] = arr[j];
            count++;
            k++;
            count++;
            j++;
            count++;
        }
        count++;
    }
    else
    {
        count++;
        while(i <= mid){
                count++;
            c[k] = arr[i] ;
            count++;
            k++;
            count++;
            i++;
            count++;

        }
        count++;
    }
    for(k=lb ; k<= ub; k++)
        arr[k] = c[k] ;


}
void mergeSort(int *arr,int lb,int ub)
{
    int mid ;
    if(lb<ub)
    {
        count++;
        mid = (lb+ub)/2 ;
        count++;
        mergeSort(arr,lb,mid);
        count++;
        mergeSort(arr,mid+1,ub);
        count++;
        mergeArray(arr,lb,mid,ub);
        count++;
    }

}
int main()
{
    int *arr ;
    int i;
    printf("\nEnter the number of elements \n");
    scanf("%d",&num) ;
    arr = (int *)malloc(sizeof(int)*num) ;
    printf("\nEnter the elements of array \n");
    for(i=0 ;i<=(num-1) ; i++)
        scanf("%d",(arr+i));
    printArray(arr,num) ;
    mergeSort(arr,0,num-1);
    printf("\nArray after sorting\n");
    printArray(arr,num);
    printf("\n%d\n",count) ;


}
