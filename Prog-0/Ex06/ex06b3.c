#include <stdio.h>
 
int main()
{
  int n,i,p;
 
  printf("1から9までの整数を入力してください：");
  scanf("%d", &n);
  if(n>=1&&n<=9){
      
    for(i=1;i<=n; i++){  
printf("\n");
  for(p=i;p>=1; p--){
      
      printf("%d",i);
      
  }
    }
  for(i=n-1;i>=0; i--){  
printf("\n");
  for(p=i;p>=1; p--){
      
      printf("%d",i);
      
  }
    }
      
      
      
  }else{
    printf("入力する数は1から9までです");
}
  return 0;
}

