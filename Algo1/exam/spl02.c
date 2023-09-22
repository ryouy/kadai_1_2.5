#include<stdio.h>
int sac(int,int);//sum and check 1=OK,0=NOT
int H[20];
int n;

int main(){
  int i,x;
  ///////
  // 問題文要注意できる金額できない金額
  ///////
  n=99;
  //nには金額などの個数
  //H[i]にはそれらの金額
  for(i=0;i<n;i++)scanf("%d",&H[i]);
//下のforの中を工夫すれば基準を自在に、iは順番に試す払えるか知りたい金額
  for(i=430;;i++){
    if(sac(0,i)==0){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}

int sac(int i,int x){
  if(x==0)return 1;
  if(i>=n)return 0;
  if(sac(i+1,x)==1||sac(i+1,x-H[i])==1)return 1;
}