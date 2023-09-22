#include <stdio.h>
#include <math.h>

typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} Point;

Point rotate1(double, Point, Point);
void  rotate2(double, Point *, Point *);

int main()
{
  double rad, deg;
  Point c = {1.0, 0.0}, a = {3.0, 2.0}; /* 中心と回転対象の点 */
  Point b1, b2;         /* 結果を入れる構造体 */

  printf("回転角 [度] を入力してください\n");
  scanf("%lf", &deg);
  rad = deg*M_PI/180;
  printf("回転角 %f [deg] (%f [rad])\n", deg, rad);
  
  /*
   * ここに関数呼び出しおよび関連するコードを書く
   */
   b1=rotate1(deg,a,c);
   b2=a;
   rotate2(deg,&b2,&c);

  printf("Center  : %f %f\n", c.x, c.y);
  printf("Point A : %f %f\n", a.x, a.y);
  printf("rotate1 : %f %f\n", b1.x, b1.y);   /* 関数１の結果を出力 */
  printf("rotate2 : %f %f\n", b2.x, b2.y);   /* 関数２の結果を出力 */
  return 0;
}

/*
 * ここにプロトタイプに合わせた rotate1関数の中身を書く
 */
 Point rotate1(double deg, Point a, Point c){
     Point b1;
     double rad;
     rad = deg*M_PI/180;
     b1.x=(a.x-c.x)*cos(rad)+(a.y-c.y)*(-sin(rad))+c.x;
     b1.y=(a.x-c.x)*sin(rad)+(a.y-c.y)*cos(rad)+c.y;
     
     return b1;
 }

/*
 * ここにプロトタイプに合わせた rotate2関数の中身を書く
 */
 void  rotate2(double deg, Point *b2, Point *c){
     double rad;
     Point fakea,fakec;
     fakea=*b2;
     fakec=*c;
     
     rad = deg*M_PI/180;
     b2->x=(fakea.x-fakec.x)*cos(rad)+(fakea.y-fakec.y)*(-sin(rad))+fakec.x;
    b2->y=(fakea.x-fakec.x)*sin(rad)+(fakea.y-fakec.y)*cos(rad)+fakec.y;
     
 }

