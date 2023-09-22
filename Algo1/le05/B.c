
// Online C compiler to run C program online
//#include <iostream>
#include <stdio.h>
//using namespace std;
int n,B[50];
int solve(int ,int );
#define MAX 500000
#define INFTY 2000000000
int L[MAX/2+2],R[MAX/2+2];
int cnt;

void merge(int A[],int n,int left,int mid,int right){
    int n1,n2,i;
  n1 = mid - left;
  n2 = right - mid;
 // L[0...n1], R[0...n2] ???
  for (i = 0 ;i< n1;i++) L[i] = A[left + i];
  for (i = 0 ;i< n2;i++) R[i] = A[mid + i];
  L[n1] = R[n2] = INFTY;
   i = 0;
  int k,j = 0;
  
  for( k = left;k< right;k++){
      cnt++;
    if (L[i] <= R[j]){
      A[k] = L[i++];
      //i = i + 1;
    }else {
      A[k] = R[j++];
     // j = j + 1;
    }
  }
}

void mergeSort(int A[],int n,int left,int right){
  if (left+1 < right){
   int mid = (left + right)/2;
    mergeSort(A,n, left, mid);
    mergeSort(A,n, mid, right);
    merge(A,n, left, mid, right);
}
}

int main() {
    int A[MAX],n,i;
    cnt=0;
    scanf("%d",&n);
    //cin>>n;
    for(i=0;i<n;i++){
        //cin >>A[i];
        scanf("%d",&A[i]);
    }
    mergeSort(A,n,0,n);
     for(i=0;i<n;i++){
         //if(i)cout<<" ";
         if(i)printf(" ");
         //cout<<A[i];
         printf("%d",A[i]);
     }
     //cout<<endl;
     printf("\n");
     //cout<<cnt<<endl;
     printf("%d\n",cnt);
     return 0;
     
     
     
}







