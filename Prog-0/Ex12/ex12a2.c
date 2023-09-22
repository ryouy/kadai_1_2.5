/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>
void d2b(int);
    
int main(){
  int a;
  while(1){
  printf("2進数に変換したい10進数の数値を入力してください\n");
  scanf("%d",&a);
  if(a<0) exit(4);
  d2b(a);
  printf("\n");
  
//printf("%lf %d",a,b);
  return 0;
}
}

void d2b(int x){
int i;
int number[8];
for (i=0;i<8;i++){
    number[7-i]= x%2;
    x /= 2;
}
for (i =0; i<8;i++){
    
    printf("%d",number[i]);

}
//return 0;
}
 

