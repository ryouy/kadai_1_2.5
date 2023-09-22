#include <stdio.h>
void function( double, double );
int main()
{
double a, b;

printf("係数aとbの値を入力してください:");
scanf("%lf %lf", &a, &b);
printf("関数の値は以下のとおりです。\n");
function( a, b );
return 0;
}
void function( double a, double b )
{
double y;
int x;
for(x = 1; x <5; x++) {
y = a*x+b;
printf("x=%dのときy=%3.1f\n",x,y);
}
}

