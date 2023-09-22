#include <stdio.h>
#include <math.h>

typedef struct{
	double x; /* x座標 */
	double y; /* y座標 */
}XY; /* 平面上の点 */
 
typedef struct{
	XY center;
	XY p;
	double r;
}CIRCLE; /* centerを中心点、pを円周上の点、rを半径とする円 */
CIRCLE input1(void);   /* データを読み込んだ構造体を戻す */
void input2(CIRCLE *); /* 構造体のポインタを渡し、そこにデータを読み込む */
int main() {
    
	CIRCLE circle;
	printf("データの入力（構造体を返す関数 ）\n");
	circle=input1();
	printf("input1: length, area: %f, %f\n", 2 * circle.r * M_PI, pow(circle.r, 2) * M_PI);

	printf("データの入力（構造体ポインタを使う関数）\n");
	input2(&circle);
	printf("input2: length, area: %f, %f\n", 2 * circle.r * M_PI, pow(circle.r, 2) * M_PI);

	return 0;
}

CIRCLE input1(){
    
	CIRCLE circle;
	scanf("%lf%lf%lf%lf",&circle.center.x, &circle.center.y, &circle.p.x, &circle.p.y);
	
	circle.r = sqrt(pow((circle.center.x-circle.p.x), 2)+pow((circle.center.y-circle.p.y),2));
	return circle;
}

void input2(CIRCLE *circle) {
    
	scanf("%lf%lf%lf%lf", &circle->center.x,&circle->center.y, &circle->p.x,&circle->p.y);
	
	circle->r=sqrt( pow((circle->center.x-circle->p.x),2) + pow((circle->center.y-circle->p.y),2));
}


