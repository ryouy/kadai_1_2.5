#include<stdio.h>
#define MAX 1000000
#define INFTY 1000000001
int  H[MAX],I[MAX];
//ふたつの配列の中で一致する最大値

int mergeH(int left,int mid,int right){
  int n1 = mid - left;
  int n2 = right -mid;
  int L[n1],R[n2];
  int i;
  static int sum=0;
  for(i=0;i<n1;i++)L[i]=H[left+i];
  for(i=0;i<n2;i++)R[i]=H[mid+i];
  L[n1]=INFTY;
  R[n2]=INFTY;
  i=0;
  int j=0,k;
  for(k=left;k<right;k++){
    if(L[i]<=R[j])H[k]=L[i++];
    else H[k]=R[j++];
    sum++;
  }
  return sum;
}

int mergesortH(int left,int right){
  int a;
  if (left+1<right){
    int mid=(left+right)/2;
    mergesortH(left,mid);
    mergesortH(mid,right);
    a=mergeH(left,mid,right);
  }
  return a;
}

int mergeI(int left,int mid,int right){
  int n1 = mid - left;
  int n2 = right -mid;
  int L[n1],R[n2];
  int i;
  static int sum=0;
  for(i=0;i<n1;i++)L[i]=I[left+i];
  for(i=0;i<n2;i++)R[i]=I[mid+i];
  L[n1]=INFTY;
  R[n2]=INFTY;
  i=0;
  int j=0,k;
  for(k=left;k<right;k++){
    if(L[i]<=R[j])I[k]=L[i++];
    else I[k]=R[j++];
    sum++;
  }
  return sum;
}

int mergesortI(int left,int right){
  int a;
  if (left+1<right){
    int mid=(left+right)/2;
    mergesortI(left,mid);
    mergesortI(mid,right);
    a=mergeI(left,mid,right);
  }
  return a;
}

int main(){
  int mx=-1,i,n,j,cnt;
  n=100000;
  //値は要変更
  for(i=0;i<n;i++)scanf("%d",&H[i]);
  mergesortH(0,i);
  for(i=0;i<n;i++)scanf("%d",&I[i]);
  mergesortI(0,i);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      //if(H[n-i]==I[j]){
      if(H[i]==I[j]){
        mx=I[j];
        break;
      }
    }
  }
  printf("%d\n",mx);
  return 0;

}

/*
#include<stdio.h>
#define MAX 1000000
#define INFTY 1000000001
int  H[MAX];

int merge(int left,int mid,int right){
  int n1 = mid - left;
  int n2 = right -mid;
  int L[n1],R[n2];
  int i;
  static int sum=0;
  for(i=0;i<n1;i++)L[i]=H[left+i];
  for(i=0;i<n2;i++)R[i]=H[mid+i];
  L[n1]=INFTY;
  R[n2]=INFTY;
  i=0;
  int j=0,k;
  for(k=left;k<right;k++){
    if(L[i]<=R[j])H[k]=L[i++];
    else H[k]=R[j++];
    sum++;
  }
  return sum;
}

int mergesort(int left,int right){
  int a;
  if (left+1<right){
    int mid=(left+right)/2;
    mergesort(left,mid);
    mergesort(mid,right);
    a=merge(left,mid,right);
  }
  return a;
}



int main(){
  int mx=-1,i,n,j,cnt,I[MAX];
  n=MAX;
  n=6;
  for(i=0;i<n;i++)scanf("%d",&H[i]);
  cnt=mergesort(0,i);
  for(i=0;i<n;i++){
    scanf("%d",&I[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(H[n-i]==I[j]){
        mx=I[j];
        break;
      }
    }
  }
  printf("%d\n",mx);
  return 0;

}



*/




