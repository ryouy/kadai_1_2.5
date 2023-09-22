#include<stdio.h>
#define MAX 101
#define INFTY 2000000001

int n,p[MAX],m[MAX][MAX],M;

void MatricxChain(){
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
  /////ans will be 153034
  int i;
  n=8;
  //p[i-1],p[i]はそれぞれ行と列の数
  // 手動入力の際は1行で入力 16 23 23 67 67 54 54 21 のようにルール守って！

  for(i=1;i<=n;i++)scanf("%d %d",&p[i-1],&p[i]);
  MatricxChain();
  printf("%d\n",m[1][n]);
  return 0;
}

/*
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
*/
