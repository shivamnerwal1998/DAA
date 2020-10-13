#include<stdio.h>
#include<stdlib.h>
static int  count ;
void printArray(int *arr , int num)
{
    int i ;
    printf("\n") ;
    for(i=0 ; i <= (num-1) ; i++)
        printf("%d ", *(arr+i));
    printf("\n") ;


}
int binarySearch(int *arr,int lb,int ub,int element)
{
    int mid ;
    count++ ;
    if(lb <= ub)
    {
        count++;
        mid = ((lb + ub))/2 ;
        count++ ;
        if(arr[mid] == element)
        {
            count++;
            printf("location of %d is %d",element,mid+1) ;
            count++;
            return count ;
        }
        else if(element < arr[mid]){
                count++ ;
                return binarySearch(arr,lb,mid-1,element);
                count++ ;

        }
        else if(element > arr[mid] ){
            count++ ;
            return binarySearch(arr,mid+1,ub,element);
            count++ ;
        }


    }

    count++ ;
    printf("\nNOT FOUND \n");
    count++ ;
    return count ;


}
int main()
{
    int *arr ;
    int num , i ,element  ;
    printf("\nEnter the Size of array \n");
    scanf("%d",&num) ;
    arr =(int *)calloc(num,sizeof(int));
    for(i=0 ; i <= num-1 ;i++)
        scanf("%d",(arr+i));
    printf("\nenter the element to search \n");
    scanf("%d",&element) ;
    printf("\ncount : %d",binarySearch(arr,0,num,element));

}
