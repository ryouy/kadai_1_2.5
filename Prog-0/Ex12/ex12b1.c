#include <stdio.h>
#include <math.h>
#define ESP 1.0e-6

double exp(double);
double df(double);
double f(double,double);



int main()
{
  double a=4.0,x=3.0,dfx,fx;
  printf("x(k-1)\t\tfx\t\tbfx\t\tx(k)\t\tf(x,%f)\n",a);
  while((fx=f(x,a)) > ESP){
      
      dfx=df(x);
      printf("%f\t%f\t%f",x,fx,dfx);
      
      x=x-fx/dfx;
      printf("\t%f\t%.6f\n",x,f(x,a));
    }
  printf("x ; %.6f\n",x);
  
  return 0;
}

double f(double x, double y){
    
  double fx;
  
  fx = exp(x)-y*x;
  return fx;
}


double df(double x){
    
  double dfx;
  dfx = exp(x)-4;
    return dfx;
}

