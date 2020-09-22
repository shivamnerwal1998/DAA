#include <stdio.h>

void countingSort(int array[], int size) {
  int output[50];
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[50];
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{
    int *arr ;
    int n,i ;
    printf("\nenter the size of array \n") ;
    scanf("%d",&n);
    arr = (int *)malloc(sizeof(int)*n);
    printf("\nenter the elements of array \n") ;
    for(i=0 ; i<=(n-1) ; i++)
        scanf("%d",(arr+i));
    printf("\n Array before sorting : \n");
    printArray(arr, n);
    printf("\nArray after sorting:\n");
    countingSort(arr,n);
    printArray(arr,n);
}
