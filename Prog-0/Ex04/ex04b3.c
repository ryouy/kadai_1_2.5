#include <stdio.h>
int main()
{
  int a;
  printf("月を入力してください：");
  scanf("%d", &a);
  switch(a){
    case 1:
      printf("1月は31日間あります\n");
      break;
    case 2:
      printf("2月は28日間、または29日間です\n");
      break;
    case 3:
      printf("3月は31日間あります\n");
      break;
    case 4:
      printf("4月は30日間あります\n");
      break;
    case 5:
      printf("5月は31日間あります\n");
      break;
   case 6:
      printf("6月は30日間あります\n");
      break;
    case 7:
      printf("7月は31日間あります\n");
      break;
    case 8:
      printf("8月は31日間あります\n");
      break;
    case 9:
      printf("9月は30日間あります\n");
      break;
    case 10:
      printf("10月は31日間あります\n");
      break;
    case 11:
      printf("9月は30日間あります\n");
      break;
    case 12:
      printf("10月は31日間あります\n");
      break;
    default:
      printf("%d月は存在しません\n",a);
  
  } 
  return 0;
}
