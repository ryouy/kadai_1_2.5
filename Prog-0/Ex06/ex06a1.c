#include <stdio.h>
 
int main()
{
  int n, sum = 0;
  int i;
 
  printf("整数を入力して下さい：");
  scanf("%d", &n);
  
  for(int i=0; i<=n; i++){
    if(i%3==0){
      sum += i ;
    }
  }
  printf("%d以下で３の倍数となる正の整数の和は%dです\n", n, sum);

  return 0;
}

