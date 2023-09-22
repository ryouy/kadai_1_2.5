#include <stdio.h>
#define ROW  2
#define COLUMN 3

int main()
{
  int i, j;
  int mat1[ROW][COLUMN],mat2[ROW][COLUMN],mat3[ROW][COLUMN];
  
  printf("Input %d x %d matrix as mat1:\n", ROW, COLUMN);
  for(i = 0; i < 2; i++)
    for(j = 0; j < 3; j++)
      scanf("%d", &mat1[i][j]);
      
  printf("Input %d x %d matrix as mat2:\n", ROW, COLUMN);
  for(i = 0; i < 2; i++)
    for(j = 0; j < 3; j++)
      scanf("%d", &mat2[i][j]);
      
  /* この部分を補う */
  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        mat3[i][j]=mat1[i][j]+mat2[i][j];
        
        
    }
  }
  printf("Sum of mat1 and mat2:\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }

  return 0;
}

