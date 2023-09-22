#include <stdio.h>
#include <math.h>

typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} Point;

Point rotate3(double, Point *);
void  rotate4(double, Point *);

int main()
{
  double rad, deg;
  Point c = {1.0, 0.0}, a = {3.0, 2.0}; /* 中心と回転対象の点 */
  Point b1, b2,comb[2],comb1[3];         /* 結果を入れる構造体 */

  printf("回転角 [度] を入力してください\n");
  scanf("%lf", &deg);
  rad = deg*M_PI/180;
  printf("回転角 %f [deg] (%f [rad])\n", deg, rad);
  
  /*
   * ここに関数呼び出しおよび関連するコードを書く
   */
   comb[0]=a;
   comb[1]=c;
   comb1[0]=a;
   comb1[1]=c;
   b1=rotate3(rad,comb);
  
   rotate4(rad,comb1);

  printf("Center  : %f %f\n", c.x, c.y);
  printf("Point A : %f %f\n", a.x, a.y);
  printf("rotate3 : %f %f\n", b1.x, b1.y);   /* 関数１の結果を出力 */
  printf("rotate4 : %f %f\n", comb1[2].x, comb[2].y);   /* 関数２の結果を出力 */
  return 0;
}

/*
 * ここにプロトタイプに合わせた rotate1関数の中身を書く
 */
 Point rotate3(double deg, Point *com){
     Point b1;
     double rad;
     rad = deg*M_PI/180;
     b1.x=(com[0].x-com[1].x)*cos(deg)+(com[0].y-com[1].y)*(-sin(deg))+com[1].x;
     b1.y=(com[0].x-com[1].x)*sin(deg)+(com[0].y-com[1].y)*cos(deg)+com[1].y;
     
     return b1;
 }

/*
 * ここにプロトタイプに合わせた rotate2関数の中身を書く
 */
 void  rotate4(double deg, Point *com){
     //double rad;
     //Point fakea,fakec;
     //fakea=*b2;
     //fakec=*c;
     
     //rad = deg*M_PI/180;
     com[2].x=(com[0].x-com[1].x)*cos(deg)+(com[0].y-com[1].y)*(-sin(deg))+com[1].x;
     com[2].y=(com[0].x-com[1].x)*sin(deg)+(com[0].y-com[1].y)*cos(deg)+com[1].y;
     
     
     
 }


