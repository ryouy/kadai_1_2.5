
#include <stdio.h>

int cnt=0,A[1000000];
void insertionSort(int A[],int N,int g){
    int i,j,v;
    for(i=g;i<N;i++){
        v=A[i];
        j=i-g;
        while(j>=0&&A[j]>v){
            A[j+g]=A[j];
            j=j-g;
            cnt++;
        }
        A[j+g]=v;
        
    }
}
int main() {
    int i,j,m=1,N,G[1000000];
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    
    for(G[m]=1;G[m]<N;m++){
        G[m+1]=3*G[m]+1;
        //m++;
        //printf("%d ",G[m]);
    }
    printf("%d\n",m);
    
    for(i=0;i<m;i++){
       insertionSort(A,N,G[m-i-1]);
    }
    for(i=m-1;i>=0;i--){
        printf("%d",G[i]);
        if(i!=0)printf(" ");
    }
    printf("\n");
    printf("%d\n",cnt);
    for(i=0;i<N;i++){
       printf("%d\n",A[i]);
    }
   
    
    return 0;
}



