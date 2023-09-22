#include <stdio.h>

int main()
{

double height1, height2, height3, height4, height5, average;
int i;
printf("５人分の身長[cm]を空白で分けて入力してください");
scanf("%lf%lf%lf%lf%lf",&height1, &height2, &height3, &height4, &height5);

average = (height1+height2+height3+height4+height5)/5;


printf("５人の身長の平均値: %3.1f [cm]\n",average);

printf("1人目の身長: %3.1f [cm]，平均からの偏差: %+3.1f [cm]\n",i,height1, average-height1);
printf("2人目の身長: %3.1f [cm]，平均からの偏差: %+3.1f [cm]\n",i,height2, average-height2);
printf("3人目の身長: %3.1f [cm]，平均からの偏差: %+3.1f [cm]\n",i,height3, average-height3);
printf("4人目の身長: %3.1f [cm]，平均からの偏差: %+3.1f [cm]\n",i,height4, average-height4);
printf("5人目の身長: %3.1f [cm]，平均からの偏差: %+3.1f [cm]\n",i,height5, average-height5);



return 0;
}

