#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("年月日を入力して下さい");
  scanf("%d%d%d", &a, &b, &c);
  if (b==1){
      b=13;
      a=a-1;
  }
  if (b==2){
      b=14;
      a=a-1;
  }
  
  d=(a + (a/4) - (a/100) + (a/400) + (13*b + 8)/5 + c)%7;
  switch(d){
    case 1:
      printf("月曜日\n");
      break;
    case 2:
      printf("火曜日\n");
      break;
    case 3:
      printf("水曜日\n");
      break;
    case 4:
      printf("木曜日\n");
      break;
    case 5:
      printf("金曜日\n");
      break;
    case 6:
      printf("土曜日\n");
      break;
    case 0:
      printf("日曜日\n");
      break;
    
  } 
  return 0;
}
