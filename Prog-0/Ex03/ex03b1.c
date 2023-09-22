#include <stdio.h>

int main()
{

double height, length, S;

printf("三角形の底辺の長さと高さをcmで入力してください :");
scanf("%lf%lf",&height, &length);

S = (double)height*(double)length/2;


printf("三角形の面積は%lf平方cmです",S);


return 0;

}

