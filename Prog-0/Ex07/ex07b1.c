#include<stdio.h>
int main()
{
  int i,n,inputs=0,evens=0,odds=0;
  int Input[100],Odd[100], Even[100];
  for(i=0;i<100;i++){
      scanf("%d",&n);
      Input[i] = n;
      inputs++;
      if(n%2==0){
	   Even[evens] = n;
	     evens++;
	 }else{
	   Odd[odds] = n;
	   odds++;
	 }
      if(n==0){
          break;
      }
    }
  
  printf("Input: ");
  for(i=0;i<inputs;i++){
      printf("%d ",Input[i]);
	}
  printf("\n");
  printf("Odd: ");
  for(i=0;i<odds;i++){
      printf("%d ",Odd[i]);
	}
  printf("\n"); 
  printf("Even: ");
  for(i=0;i<evens;i++){
      printf("%d ",Even[i]);
	}
  printf("\n");
    
  return 0;
}
      

