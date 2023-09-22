
// Online C compiler to run C program online
#include <stdio.h>
#define ArrayMax 20000000
int A[300000000];
int B[300000000];
int C[ArrayMax];


void CountingSort(int A[],int n){
    int i;
    for(i=0;i<ArrayMax;i++) C[i]=0;
    
    for(i=1;i<=n;i++) C[A[i]]++;
    
    for(i=0;i<ArrayMax;i++) C[i]=C[i]+C[i-1];
    
    for(i=n+1;i>0;i--){
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    } 
    
    for(i=1;i<=n;i++){
        if(i>1)printf(" ");
        printf("%d",B[i]);
    }
    printf("\n");
     
}

int main() {
    int i,n,p[20000];
    for(i=1;i<=2000;i++)p[i]++;
    
    // Write C code here
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d",&A[i]);
    
    CountingSort(A,n);
    //int i;
    
    return 0;
}


