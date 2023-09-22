#include <stdio.h>

double avesub_ptr(double *, double *, double *);   

int main()
{
  double a, b, c, ave;

  printf("3つ値を入力してください:\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  ave = avesub_ptr(&a, &b, &c);   

  printf("平均:  %.3f\n", ave);
  printf("平均差し引き後のデータ:  %+.3f  %+.3f  %+.3f\n", a, b, c);
  return 0;
}

/* 平均を計算して各データから引き算する関数。戻り値はその平均値。 */
double avesub_ptr(double *a, double *b, double *c)
{
double average;
average = (*a+*b+*c)/3;
*a = *a - average;
*b = *b - average;
*c = *c - average;
return average;
  /* ここを適宜作成 */

}
