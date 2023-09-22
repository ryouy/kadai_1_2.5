#include <stdio.h>
#define ROW 3
#define COL 4
 
int main()
{
  int array[ROW][COL] = {
    { 2,  3, 12,  3},
    { 4, 10,  5,  6},
    { 8,  9,  0,  7},
  };
  int i, j, n, cnt=0, nocnt=0;
 
  printf("数値を入力してください: ");
  scanf("%d", &n);
  //while(1){
      for(i=0;i<ROW;i++){
          for(j=0;j<COL;j++){
          if(array[i][j]==n){
              printf("array[%d][%d]が%dです\n",i,j,n);
              cnt++;
          }else{
              nocnt++;
          }
         } 
      }
      if(nocnt==12){
          printf("2次元配列 array の要素に %d はありません\n",n);
      }else{
          printf("2次元配列 array の要素に %d は %d 個ありました\n",n,cnt);
      }
  //}
  return 0;
}


