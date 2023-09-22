#include<stdio.h>
int H[12],n=12;
int sac(int i,int x){
  if(x==0)return 1;
  if(i>=n)return 0;
  if(sac(i+1,x)==1||sac(i+1,x-H[i])==1)return 1;
}
int main(){
  int i,x;
  
  
  int cnt;
  for(i=0;i<12;i++)scanf("%d",&H[i]);
  //for(i=430;;i++){
    if(sac(0,500)==0){
     // printf("%d\n",i);
     cnt++;
      //break;
    }
    printf("%d",cnt);
  //}
  return 0;
}




