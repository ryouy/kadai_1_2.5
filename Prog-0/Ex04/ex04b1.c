#include <stdio.h>
int main()
{
  int a;

  printf("整数を入力してください ");
  scanf("%d", &a);

  printf("方法１：");  /* 多岐選択 */
  if(a%2!=0 && a%3!=0) printf("%dは奇数で、３の倍数ではない\n",a);
  else if(a%2==0 && a%3!=0) printf("%dは偶数で、３の倍数ではない\n",a);
  else if(a%2!=0 && a%3==0) printf("%dは奇数で、３の倍数である\n",a);
  else if(a%2==0 && a%3==0) printf("%dは偶数で、３の倍数である\n",a);
 
  printf("方法２：");  /* 双岐選択 */
  /* printf で出力される行数は改行文字でコントロールできるので、
     一つの printf が１行に対応するとは限らないことに注意 */
  if(a%2==0) printf("%dは偶数で、",a);
  else printf("%dは奇数で、",a);
  if(a%3==0) printf("３の倍数である\n");
  else printf("３の倍数ではない\n");
 
  printf("方法３：");  /* 入れ子の双岐選択 */
  if(a%2==0) {
    if(a%3==0) {
      printf("%dは偶数で、３の倍数である\n",a);
    }
    else printf("%dは偶数で、３の倍数ではない\n",a);
  } 
  else{
    if(a%3==0) {
      printf("%dは奇数で、３の倍数である\n",a);
    }
    else printf("%dは奇数で、３の倍数ではない\n",a);
  } 

  return 0;
}

