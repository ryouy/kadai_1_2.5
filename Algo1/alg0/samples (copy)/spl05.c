#include<stdio.h>
#define MAX 10000
//フィボナッチ
long long int F[MAX];

void fibonacci(int n){
  int i;
   F[0]=F[1]=1;
   for(i=2;i<n+1;i++){
     F[i]=F[i-1]+F[i-2];

   }
}

int main(){
  int n;
  
  scanf("%d",&n);
  fibonacci(n);
  printf("%lld\n",F[n]);
  return 0;
}
