#include <stdio.h>
#include "prog01.h"

Record input(void);
void output(Record);

int main(){
  int i;
  Record data,data1;

  printf("--------データ入力--------\n");
  printf("1人目のデータを入力して下さい\n");
  data=input();
  printf("\n");


  printf("--------データ出力--------\n");
  printf("年齢基準日: 2022/10/1\n");

  printf("1人目のデータ:");
  output(data);
  
  

  return 0;
}

Record input(void){

  Record data;

  printf("苗字 -> ");
  scanf("%s",data.familyname);

  printf("名前 ->");
  scanf("%s",data.firstname);

  printf("生まれた年（西暦） ->");
  scanf("%d",&data.birthday[0]);

  printf("生まれた月 ->");
  scanf("%d",&data.birthday[1]);

  printf("生まれた日 ->");
  scanf("%d",&data.birthday[2]);

  return data;
}

void output(Record data){
    
  printf("\n");
  printf("苗字:%s\n",data.familyname);
  printf("名前:%s\n",data.firstname);
  printf("生年月日:%d/%d/%d\n",data.birthday[0],data.birthday[1],data.birthday[2]);
}

 
