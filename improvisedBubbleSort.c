#include<stdio.h>
#include<stdlib.h>
int count ;
void printArray(int *arr , int num)
{
    int i ;
    for(i=0 ; i<= (num-1) ;i++)
        printf("%d ",*(arr+i));
}
int bubbleSort(int *arr , int num)
{
    int temp , i , j , flag = 1;
    count++ ;
    for(i=0; i<=(num-2) && (flag == 1) ; i++)
    {
        count++ ;
        for(j=0; j<=(num-2)-i  ; j++)
        {
            count++ ;
            flag = 0 ;
            if(arr[j] > arr[j+1])
            {
                count++ ;
                flag = 1 ;
                count++ ;
                temp = arr[j] ;
                count++ ;
                arr[j] = arr[j+1] ;
                count++ ;
                arr[j+1] = temp ;
                count++ ;
            }
            count++ ;
        }
        count++ ;
    }
    count++ ;
    return count;

}

int main()
{
    int *arr,num,i ;
    printf("\nENTER THE NUMBER OF ELEMENTS \n");
    scanf("%d",&num);
    arr = (int *)calloc( num , sizeof(int));
    printf("\nenter the elements of array \n");
    for(i=0 ; i<=num-1 ; i++)
        scanf("%d",(arr+i));
    printf("count is : %d \n",bubbleSort(arr,num));
    printArray(arr,num);
   return 0 ;
}

