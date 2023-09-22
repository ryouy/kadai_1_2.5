#include<stdio.h>
#include<stdlib.h>
#define MAXINPUT 1073741823

int keta(int);
int ketanum(int, int);

int main()
{
  int i,j,n,sum = 0;

  printf("1から1073741823までの整数を入力してください：");
  
  scanf("%d",&n);

  if(n<0 || n>1073741823){
      printf("illegal value\n");
      exit(8);
    }

  j = keta(n);

  while(j>0){
      sum += ketanum(n,j);
      j--;
    }

  printf("%d\n",sum);

  return 0;
}

int keta(int x){
  int keta = 1, y = 10;
  
  
  while((x/y)>0){
      y *= 10;
      
      keta++;
    }
  return keta;
}

int ketanum(int x,int y){
    
  int i, j, k = 1;

  for(i = 1 ; i < y ; i++){
    k *= 10;
  }
  j = (x/k) % 10;
  
  return j;
}

