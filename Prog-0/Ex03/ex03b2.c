#include <stdio.h>

int main()
{
  int a = 10;
  int b =  4;

  printf("整数:%d / %dの商は%dであり、剰余%dはである。\n",a ,b ,a/b ,a%b);
  printf("実数: %.6f / %.6f = %.6f である。\n",(double)a ,(double)b ,(double)a/(double)b );
  return 0;
}
