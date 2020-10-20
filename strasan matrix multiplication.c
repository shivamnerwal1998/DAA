#include<stdio.h>
int main(){
  int mat1[2][2], mat2[2][2], mat3[2][2], i, j;
  int m1, m2, m3, m4 , m5, m6, m7;
  int count ;

  printf("Enter the elements of first matrix: ");
  for(i = 0;i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &mat1[i][j]);

  printf("Enter elements of second matrix: ");
  for(i = 0; i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &mat2[i][j]);


  m1= (mat1[0][0] + mat1[1][1]) * (mat2[0][0] + mat2[1][1]);
  m2= (mat1[1][0] + mat1[1][1]) * mat2[0][0];
  m3= mat1[0][0] * (mat2[0][1] - mat2[1][1]);
  m4= mat1[1][1] * (mat2[1][0] - mat2[0][0]);
  m5= (mat1[0][0] + mat1[0][1]) * mat2[1][1];
  m6= (mat1[1][0] - mat1[0][0]) * (mat2[0][0]+mat2[0][1]);
  m7= (mat1[0][1] - mat1[1][1]) * (mat2[1][0]+mat2[1][1]);

  mat3[0][0] = m1 + m4- m5 + m7;
  mat3[0][1] = m3 + m5;
  mat3[1][0] = m2 + m4;
  mat3[1][1] = m1 - m2 + m3 + m6;

   printf("\n multiplipication of matrix 1 and matrix 2 is  \n");
   for(i = 0; i < 2 ; i++){
      printf("\n");
      for(j = 0;j < 2; j++)
           printf("%d\t", mat3[i][j]);
   }

   return 0;
}
