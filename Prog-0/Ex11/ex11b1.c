#include <stdio.h>

double c2f(double);

int main() {
  int i;
printf("摂氏(°C)	 華氏（°F)\n");
    for(i=0;i<=100;i+=5)
  printf("%d   %.2f\n", i,c2f(i));
  return 0;
}


double c2f(double x) {
  return 9*x/5 + 32;
}


