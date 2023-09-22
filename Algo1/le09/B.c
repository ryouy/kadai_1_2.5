
// Online C compiler to run C program online
#include <stdio.h>
#define Max 10000000
 int p[99999999];
 int N,d,Array[Max+1];
 void swap(int *pa, int *pb){
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
  for(int q=0;q<999;q++)p[q]++;
}
 
 void mh(int i){
     int l,r,L;
     l=2*i;
     r=2*i+1;
     
     if(l<=N&&Array[l]>Array[i]) L=l;
     else L=i;
     if(r<=N&&Array[r]>Array[L]) L=r;
     if(L!=i){
         swap(&Array[i],&Array[L]);
         mh(L);
     }
 }

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
    
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&d);
        Array[i]=d;
    }
    for(int i=N/2;i>=1;i--){
        mh(i);
    }
    for(int i=1;i<=N;i++){
        printf(" %d",Array[i]);
    }
    printf("\n");
    
    return 0;
}

