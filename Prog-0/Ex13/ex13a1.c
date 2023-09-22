#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
int pop(void);

double stack[STSIZE];
int top = 0;

int main(){
  int data,status, i;
  double data2;

  while (1) {
    printf("挿入:[1 データ],  取り出し:[2] >>");
    status = scanf("%ld", &data);
    if (status != 1) break;
    /* 入力値が0の場合はデータ取り出し、それ以外ならデータを
       スタックに追加する */
    if (data == 1){
        //printf("Data: %d\n", pop() );
        scanf("%lf",&data2);
        //printf("%.3f\n",data2);
        push(data2);
    } 
    
    else if (data == 2) { printf("取り出したデータ:%.3f\n",stack[top-1]);
        pop;}
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    /* スタックがいっぱいの場合、エラー処理を行う */
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

int pop(void){
  if (top == 0) {
    /* スタックが空の場合、エラー処理を行う */
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}


