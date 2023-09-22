
// Online C compiler to run C program online
#include <stdio.h>
int n,A[50];
int solve(int ,int );
int main() {
    int q,M,i,p[10000],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&M);
        if (solve(0,M)){
            flag=0;
           // printf("yes\n");
        } else{
            flag=1;
           // printf("no\n");
        }
        if(flag==0)printf("yes\n");
       else if(flag==1)printf("no\n");
    }
    // Write C code here
    //printf("Hello world");

    return 0;
}

int solve(int i,int m){
    if(m==0)return 1;
    if(i>=n)return 0;
    int res=solve(i+1,m)||solve(i+1,m-A[i]);
    return res;
}


