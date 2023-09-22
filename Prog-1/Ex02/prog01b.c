#include <stdio.h>
double SeqAvgExt(double);

int main() {
  int cnt=0;
  while(1){
    int status;
    double num;
    printf("データを入力してください:");

    status=scanf("%lf",&num);
    if(status==EOF)break;
    cnt++;

    printf("データの個数 = %d ，ここまでの平均 = %lf\n",cnt,SeqAvgExt(num));
    }
    
    return 0;
}

double SeqAvgExt(double x){
    static double avg,favg=0;
    static int cnt=0;
    cnt++;
    avg=((cnt-1)*avg+x)/cnt;

    return avg;
    
}



