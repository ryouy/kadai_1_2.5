#include <stdio.h>

int main () {

  int m,d,n;
  int days = 0;
  printf("月と日を空白で区切って入力してください:\n");
  scanf("%d%d",&m,&d);
printf("2022年%d月%d日は",m,d);
  while(m>1){
      if(m==5||m==7||m==8||m==10||m==12){
          days += 30;
      }
      if(m==2||m==4||m==6||m==9||m==11){
          days += 31;
      }
      if(m==3){
          days += 28;
      }
      m --;

  }
  days+=d;
  printf("%d日目で",days);
  
  
  
  switch(days%7){
      case 1:
      printf("土曜日です\n");
      break ;
      case 2:
      printf("日曜日です\n");
      break ;
      case 3:
       printf("月曜日です\n");
      break ;
      case 4:
       printf("火曜日です\n");
      break ;
      case 5:
       printf("水曜日です\n");
      break ;
      case 6:
       printf("木曜日です\n");
      break ;
      case 7:
      printf("金曜日です\n");
      break ;
      
  }
  
  
}

