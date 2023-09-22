#include<stdio.h>

int main(){
  int n,sum=0;
  while(scanf("%d",&n)==1){
    if(n%2==0)sum++;
  }
  printf("%d\n",sum);
  return 0;
}
