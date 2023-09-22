#include <stdio.h>

int main()
{
  int a, b, c, d, e, yb, yc, yd, ye ;

 printf("Enter a ->: ");
 scanf("%d", &a);
 
 b = a-2;
 c = a-1;
 d = a+1;
 e = a+2;

 yb = b^2;
 yc = b^2-4*c+3; 
 yd = b^2-4*d+3;
 ye = b^2-4*e+3; 

  //printf("x : y\n0 : %d\n1 : %d\n2 : %d\n3 : %d\n4 : %d\n", b^2-4b+3 );
  printf("x : y\n0 : %d\n", yb );
  return 0;
}
