#include <stdio.h>
#define ROW  5
#define COLUMN 5

int main()
{
  int i, j, what;
  int mat[ROW][COLUMN]={{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,0,1,1},{0,0,0,0,1}};
  
  printf("反転する方向を指定してください（縦：0、横：1）");
  scanf("%d", &what);
  if(what==0){
  for(i = 4; i >=0; i--){
    for(j = 0; j < 5; j++){
    printf("%d ", mat[i][j]);
  }
  printf("\n");
  }
 }else if (what==1){
     for(i = 0; i <5; i++){
    for(j = 4; j >=0; j--){
    printf("%d ", mat[i][j]);
  }
  printf("\n");
     }
  }else{
      printf("不適切な数値が入力されました\n");
  }
 return 0;
}

