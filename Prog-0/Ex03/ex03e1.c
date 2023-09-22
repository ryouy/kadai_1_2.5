#include <stdio.h>

int main()
{

int i,j,warizan,amari;
printf("整数 m, n を入力してください");
scanf("%d%d",&i,&j);

warizan = i/j;
amari = i-j*warizan;


printf("%dを%dでわった余りは%dです。\n",i,j,amari);



return 0;
}
