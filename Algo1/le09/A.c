
// Online C compiler to run C program online
#include <stdio.h>
#define Max 10000000
 int p[999999];
int P(int i){
    return i/2;
}

int L(int i){
    return i*2;
}
int R(int i){
    return i*2+1;
    
}
    

int main() {
    int N,d,Array[Max+1];
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&d);
        Array[i]=d;
    }
    for(int i=1;i<=N;i++){
        printf("node %d: key = %d, ",i,Array[i]);
        if(P(i)>=1) printf("parent key = %d, ",Array[P(i)]);
        if(L(i)<=N) printf("left key = %d, ",Array[L(i)]);
        if(R(i)<=N) printf("right key = %d, ",Array[R(i)]);
        printf("\n");
    }
    
    return 0;
}

