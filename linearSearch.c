#include<stdio.h>
void linearSearch(int arr[],int element,int num)
{
    int count = 0;
    int i;
    count++;
    for(i=0 ;i<num ;i++)
    {
        count++;
        if(arr[i] == element)
        {
            count++;
            printf("location of %d is %d",element,++i);
            count++;
            break;



        }
        count++;
    }count++;
    printf("\ncount : %d",count);

}

int main()
{
    int num,element;
    int arr[100],i;
    printf("enter the number of elements \n");
    scanf("%d",&num);
    printf("enter the elements of array\n");
    for(i=0 ;i<num ;i++)
        scanf("%d",&arr[i]);
    printf("ENTER THE ELEMNT\n");
    scanf("%d",&element);
    linearSearch(arr,element,num);
    return 0;
}
