#include <stdio.h>
#define SIZE  10

int main()
{
  int i, j,bai,mat1[SIZE][SIZE],mat2[SIZE][SIZE];
  int SIZE1,SIZE2=0;
  //int mat1[ROW][COLUMN],mat2[ROW][COLUMN];
  
  printf("行列の大きさを入力して下さい（最大10 x 10) :");
  scanf("%d%d", &SIZE1,&SIZE2);
  
  printf("%dx%d行列を整数値で入力してください\n",SIZE1,SIZE2);
  for(i = 0; i < SIZE1; i++){
    for(j = 0; j < SIZE2; j++){
      scanf("%d", &mat1[i][j]);
}
}
      
  /* この部分を補う */
  printf("行列を何倍にしますか？");
  scanf("%d", &bai);
  for(i = 0; i < SIZE1; i++){
    for(j = 0; j < SIZE2; j++){
        mat2[i][j]=mat1[i][j]*bai;
        }
  }
 
  for(i = 0; i < SIZE1; i++){
    for(j = 0; j < SIZE2; j++){
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }

  return 0;
}

