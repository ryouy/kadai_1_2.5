#include<stdio.h>
#define MAX 101
#define INFTY 2000000001

int n,p[MAX],m[MAX][MAX];

void MatricxChainMultiplication(){
  int i,j,l,k;
  for(i=1;i<=n;i++)m[i][i]=0;

  for(l=2;l<=n;l++){
    for(i=1;i<=n-l+1;i++){
      j=i+l-1;
      m[i][j]=INFTY;
      for(k=i;k<j;k++){
    int a=m[i][j],b=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
    m[i][j]=(a>b)?b:a;
      }
    }
  }
}

int main(){
  int i;
  n=8;
  for(i=1;i<=n;i++)scanf("%d %d",&p[i-1],&p[i]);
  MatricxChainMultiplication();
  printf("%d\n",m[1][n]);
  return 0;
}

#include<stdio.h>
int sac(int,int);//sum and check 1=OK,0=NOT
int H[20];
int n;

