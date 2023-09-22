#include <stdio.h>
void SeqAvgExt(double);
double avg=0; 
int cnt=0;

int main() {
  while(1){
    int status;
    double num;
    printf("データを入力してください:");

    status=scanf("%lf",&num);
    if(status==EOF)break;

cnt++;
SeqAvgExt(num);
printf("データの個数 = %d，ここまでの平均 = %lf\n",cnt,avg);
}
    return 0;
}

void SeqAvgExt(double x){
    avg=((cnt-1)*avg+x)/cnt;
}


