#include <stdio.h>
 
int main(){
  double a = 7.0, b = 3.5;
  double *p, *q;
  
  p = &a;
  q = &b;
 
  printf("Value of a: %.1f, Address of a: %p\n", *p, p);
  printf("Value of b: %.1f, Address of b: %p\n", *q, q);
  printf("Product: %.1f\n", (*p) * (*q));
  printf("Quotient: %.1f\n", (*p) / (*q));
  return 0;
}

