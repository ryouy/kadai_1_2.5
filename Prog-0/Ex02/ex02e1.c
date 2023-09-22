#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, d, e, f, yb, yc, yd, ye, yf, b2, c2, d2, e2, f2 ;

 printf("Enter a ->: \n");
 scanf("%d",&a);
 
 b = a-2;
 c = a-1;
 d = a+0;
 e = a+1;
 f = a+2;
 
 b2 = pow(b, 2);
 c2 = pow(c, 2);
 d2 = pow(d, 2);
 e2 = pow(e, 2);
 f2 = pow(f, 2);

 yb = b2-4*b+3;
 yc = c2-4*c+3; 
 yd = d2-4*d+3;
 ye = e2-4*e+3; 
 yf = f2-4*f+3; 

 printf("x : y\n0 : %d\n1 : %d\n2 : %d\n3 : %d\n4 : %d\n", yb, yc, yd, ye, yf );

  return 0;
}

