/*Function to print Array*/
void printArray(int *arr,int num)
{
    int i;
    printf("\nArray is :\n");
    for(i=0; i<=(num-1); i++)
        printf("%d\t",*(arr+i));

}
/*Insertion Sort Function*/
int insertionSort(int *arr,int num)
{
    int k,temp,j,count =0  ;
    count++;
    for(k=1; k<=(num-1); k++)
    {
        count++;
        temp = arr[k];
        count++;
        j = k-1 ;
        count++;
        while((j>=0) && (temp < arr[j]))
        {
            count++;
            arr[j+1] = arr[j];
            count++;
            j = j-1;
            count++;
        }count++;
        arr[j+1] = temp;
        count++;
    }count++;
    printArray(arr,num);
    return count;

}
/*Main function*/
void main()
{
    int num,*arr, i;
    arr = (int *)malloc(sizeof(int));
    printf("\nenter the number of elements\n");
    scanf("%d",&num);
    arr = (int *)realloc(arr ,num*sizeof(int));
    printf("\nEnter the elements of array\n");
    for(i =0; i<=(num-1); i++)
        scanf("%d",arr+i);
    printArray(arr,num);
    printf("\ncount is :%d\n",insertionSort(arr,num));
    getchar();
}
