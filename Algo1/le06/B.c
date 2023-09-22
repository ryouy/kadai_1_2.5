
// Online C compiler to run C program online
#include <stdio.h>


void partition(int A[],int p,int r){
int x,i,j,k,stc;
//partition standard
   x = A[r];
   i = p-1;
   //i = 0;
   for(j=p;j<r;j++){
     if (A[j] <= x){
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
   
   for(k=0;k<=r;k++){
       if(k>0)printf(" ");
       if(k==i+1)printf("[%d]",A[k]);
       else printf("%d",A[k]);
   }
   printf("\n");
}
int main() {
    int r,A[1000000],i;
    scanf("%d",&r);
    for(i=0;i<r;i++)scanf("%d",&A[i]);
    
    partition(A, 0,r-1);
    
    return 0;
}






