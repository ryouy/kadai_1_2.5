#include <stdio.h>

int main() {

  int score,scores, count=0, pass=0;
  double avg;
  
  
while(score>=0)
{
  printf("得点を入力して下さい:");
  scanf("%d", &score);
  if (score>=0)
  {
    count++;
    if (score>=50)
    {
       pass++; 
    }
    scores += score  ;
  }
  }
  
  avg = (double)scores/(double)count;
printf("受験者数 %d 名，平均点 %.6f 点\n",count,avg);
printf("合格者数 %d 名，不合格者数 %d 名\n",pass,count-pass,avg);

  return 0;
}

