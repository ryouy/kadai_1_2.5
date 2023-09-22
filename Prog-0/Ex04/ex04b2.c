#include <stdio.h>
int main()
{
  int b;
  double a;
  

  printf("温度と湿度を入力して下さい");
  scanf("%lf%d", &a, &b);
  printf("温度：%5.2f度　湿度：%d%%\n",a,b);

  
  if(a<20) printf("寒い\n");
  else if(a>=20 && a<28 && b<60) printf("快適\n");
  else if(a>=28 && b>=60) printf("蒸し暑い\n");
  else if(a>=28 && b<60) printf("暑い\n");
  
  return 0;
}

