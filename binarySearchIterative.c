#include<stdio.h>
#include<stdlib.h>
static int count ; // declaring global variable count
void printArray(int *arr,int num)
{
    int i ;
    printf("\n");
    for(i=0 ; i <=(num-1) ; i++ )
        printf("%d ",*(arr+i));
}
int binarySearch(int *arr,int begining,int end,int element)
{
    int mid ;
    count++ ;
    while (begining <= end) {
        count++ ;
         mid = (begining+end)/2 ;
        count++ ;
        if (arr[mid] == element){
            count++ ;
            return mid+1;
        count++ ;}
        if (arr[mid] < element){
            count++ ;
            begining = (mid+1) ;
            count++ ;
        }
        else{
            count++;
            end = (mid - 1) ;
            count++ ;
        }
    }
    return -1;
}


int main()
{
    int *arr ;
    int num ;
    int i ;
    int element ;
    printf("\nenter the number of elements\n");
    scanf("%d",&num);
    // allocating dynamic memory to array
    arr = (int *)calloc(num,sizeof(int)) ;
    printf("\nenter the elements");
    for(i=0 ; i<=(num-1);i++ )
        scanf("%d",(arr+i)) ;
    printf("\nenter the element to search \n");
    scanf("%d",&element);
    printf("location is  : %d ",binarySearch(arr,0,num,element));
    printf("\ncount: %d",count);

}
