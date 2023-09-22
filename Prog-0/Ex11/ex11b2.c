#include <stdio.h>

int sectime(int,int,int);
int calc(int,int);
double jikan(double);
int h,m,s,h1,m1,s1,t1,t2=0;

int main() {
printf("時刻1の時、分、秒を入力してください:");
scanf("%d%d%d",&h,&m,&s);
printf("時刻2の時、分、秒を入力してください:");
scanf("%d%d%d",&h1,&m1,&s1);
t1=sectime(h,m,s);
t2=sectime(h1,m1,s1);

printf("時刻1は0時から数えて %d秒\n",t1);
printf("時刻2は0時から数えて %d秒\n",t2);
printf("経過時間は%d秒（%.3f時間）です。\n",calc(t1,t2),jikan(calc(t1,t2)));
  return 0;
}


int sectime(int h,int m,int z) {
  return h*3600+m*60+s;
}
int calc(int a,int b){
    return b-a;
}
double jikan(double c){
   return c/3600;
}

 

