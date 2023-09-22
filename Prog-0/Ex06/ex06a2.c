#include <stdio.h>
 
int main()
{
  int sum=1 ;
  int n,i;
 
  printf("階乗を計算したい数を入力してください：");
  scanf("%d", &n);
  if(n>=0 && n<=12){
  
  for(i=n;i>0; i--){
   
      sum = sum*i;
    
  }
  printf("%d\n", sum);
}else{
    printf("計算できません\n");
}
  return 0;
}

