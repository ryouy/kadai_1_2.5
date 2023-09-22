//nには材料になる数値たちの個数、Aにはそれらの値
//qには目標とする数値の個数、以下同様

// Online C compiler to run C program online
#include <stdio.h>
int n,A[120],cnt;
int solve(int ,int );
int main() {
    int q,M,i,p[10000],flag=0;
    //scanf("%d",&n);
    for(i=0;i<13;i++){
        scanf("%d",&A[i]);
    }
    ///////
  // 問題文要注意できる金額できない金額
  ///////
    scanf("%d",&q);
    for(i=0;i<1;i++){
        M=500;
        //scanf("%d",&M);
        if (solve(0,M)==1){
            flag=0; 
            cnt++;   
        } else{
            flag=1;
        }
        if(flag==0)printf("yes\n");
       else if(flag==1)printf("no\n");
    }
   
    int r[200000000000];
    return 0;
}

int solve(int i,int m){
    if(m==0)return 1;
    if(i>=n)return 0;
    int res=solve(i+1,m)||solve(i+1,m-A[i]);
    return res;
}


