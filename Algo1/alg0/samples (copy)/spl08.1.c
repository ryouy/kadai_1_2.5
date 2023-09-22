// テキスト中に数値もしくは偶数奇数はいくつあるか
#include<stdio.h>

int main(){
  int n,sum=0;
  while(scanf("%d",&n)==1){
    // 多分答えは2022
    if(n==2022)sum++;
    //if(n%2==0)sum++; guusuu
     //if(n%2==1)sum++; kisuu
  }
  printf("%d\n",sum);
  return 0;
}



