#include <stdio.h>
 
int main()
{
  int n,i;
 
  printf("整数を入力してください：");
  scanf("%d", &n);
  
  
  
  for(i=n;i>=5; i--){
      if(i%5==0){
   
      printf("%d\n",i);
      }
  }
  


  return 0;
}

