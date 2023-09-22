#include <stdio.h>
 
int main()
{
  int n,i;
 
  printf("整数を入力してください：");
  scanf("%d", &n);
  
  
  
  for(i=3;i<=n; i++){
      if(i%5==3){
   
      printf("%d\n",i);
      }
  }
  


  return 0;
}

