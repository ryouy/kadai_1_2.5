#include<stdio.h>
int main(){
 int i, x, sum = 0;
 for ( i = 0; i < 10; i++ ){
 scanf("%d", &x);
 sum += x;
 }
 printf("%d\n", sum);
 return 0;
}

