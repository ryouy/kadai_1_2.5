#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i;
  double f_value, l_value, dif,bet;
  double *x;

  /* 最初の値、最後の値、数値の個数を入力 */
  printf("Input First value, Last value, Total number: ");
  scanf("%lf%lf%d", &f_value, &l_value, &num);

  /* これ以降を作成すること */

  /* メモリ確保 */
  x=(double*)malloc(num*sizeof(double));

 /* 格納する値の決定。
    端の値のぶんを考慮して分割数を決める事と、整数除算しないように注意 */
dif=l_value-f_value;
bet=dif/(double)(num-1);
x[0]=f_value;
for(i=1;i<num;i++){
    x[i]=x[0]+bet*i;
}
  /* 結果の表示 */
printf("Values of x\n");
for(i=0;i<num;i++){
    printf("%.3f ",x[i]);
}
printf("\n");
printf("Value of x^2\n");
for(i=0;i<num;i++){
    printf("%.3f ",x[i]*x[i]);
}
printf("\n");

  /* メモリ確保したので後処理をする */
  free(x);
  return 0;
}

