
// Online C compiler to run C program online
#include <stdio.h>

struct Card{
    char suit;
    int value;
};
struct Card L[100000],R[100000];
int partition(struct Card A[],int p,int r){
int i,j,k;
struct Card stc,x,L[100000],R[100000];
//partition standard
   x = A[r];
   i = p-1;
   //i = 0;
   for(j=p;j<r;j++){
     if (A[j].value <= x.value){
       i = i+1;
       //A[i] ? A[j] ???
     stc=A[i];
     A[i]=A[j];
     A[j]=stc;
     }
   }
   
   
   //A[i+1] ? A[r] ???
   stc=A[r];
   A[r]=A[i+1];
   A[i+1]=stc;
   return i+1;
   
}

void quickSort(struct Card A[],int n,int p, int r){
    int q;
    if(p<r){
        q=partition(A,p,r);
        quickSort(A,n,p,q-1);
        quickSort(A,n,q+1,r);
    }
}

void merge(struct Card A[],int n,int left,int mid,int right){
    int n1,n2,i;
  n1 = mid - left;
  n2 = right - mid;
 // L[0...n1], R[0...n2] ???
  for (i = 0 ;i< n1;i++) L[i] = A[left + i];
  for (i = 0 ;i< n2;i++) R[i] = A[mid + i];
  L[n1].value = R[n2].value = 20000000;
   i = 0;
  int k,j = 0;
  
  for( k = left;k< right;k++){
    //cnt++;
    if (L[i].value <= R[j].value){
      A[k] = L[i++];
      //i = i + 1;
    }else {
      A[k] = R[j++];
     // j = j + 1;
    }
  }
}

void mergeSort(struct Card A[],int n,int left,int right){
  if (left+1 < right){
   int mid = (left + right)/2;
    mergeSort(A,n, left, mid);
    mergeSort(A,n, mid, right);
    merge(A,n, left, mid, right);
                    
}
}
int main() {
    int r,i,k,v;
    char S[10];
    int same=1;
    struct Card A[100000],B[100000];
    scanf("%d",&r);
    for(i=0;i<r;i++){
        scanf("%s %d",S,&v);
    A[i].suit=B[i].suit=S[0];
    A[i].value=B[i].value=v;
    }
 mergeSort(B,r,0,r);
 quickSort(A,r,0,r-1);
 for(i=0;i<r;i++){
     if(A[i].suit!=B[i].suit) same=0;
 }
 if(same==1) printf("Stable\n");
 else printf("Not stable\n");
    for(k=0;k<r;k++){
       printf("%c %d\n",A[k].suit,A[k].value);
   }
   //printf("\n");
    return 0;
}







