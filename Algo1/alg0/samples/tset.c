#include<stdio.h>
#define MAX 1000000
#define INFTY 1000000001
int  H[MAX];





int main(){
  int mx=-1,i,n,j,cnt,I[MAX],cnt1=0;
  //n=MAX;
  n=100000;
  printf("juu");
  for(i=0;i<n;i++)scanf("%d",&H[i]);
  //cnt=mergesort(0,i);
  for(i=0;i<n;i++){
    scanf("%d",&I[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(H[n-i]==I[j]){
       // mx=I[j];
        cnt1++;
        break;
      }
    }
  }
  printf("%d\n",cnt1);
  return 0;

} 