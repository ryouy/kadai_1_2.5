#include <stdio.h>

int main()
{
  int i = 27;
  double x = 31.7;

  printf("単位数は%05dです\n", i);
  printf("単位数は%3dです\n", i);
  printf("単位数は%-3dです\n", i);
  printf("単位数は%+4dです\n", i);
  printf("点数は%.3f点です\n", x);
  printf("点数は%e点です\n", x);
  printf("点数は%.3E点です\n", x);

  return 0;  
}
