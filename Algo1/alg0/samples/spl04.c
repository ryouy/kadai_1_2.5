#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
// 逆なんとか、手書きでもいけるか 空白しっかりかこう
int top=0,s[MAX];

int pop(){
  return s[top--];
}
void push(int x){
  s[++top]=x;
}

int main(){
  int a,b;
  char h[MAX];
  while(scanf("%d",h)!=EOF){
    if(h[0]=='+'){
      a = pop();
      b = pop();
      push(a + b);
    }else if(h[0]=='-'){
      a = pop();
      b = pop();
      push(b - a);
    }else if(h[0]=='*'){
      a = pop();
      b = pop();
      push(a * b);
    }else push(atoi(h));
  }
  printf("%d\n",pop());
  return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int top=0,s[MAX];
int pop();
void push(int);


int main(){
  int a,b;
  char h[MAX];
  while(scanf("%s",h)!=EOF){
    if(h[0]=='+'){
      a = pop();
      b = pop();
      push(a + b);
    }
    else if(h[0]=='-'){
      a = pop();
      b = pop();
      push(b - a);
    }
    else if(h[0]=='*'){
      a = pop();
      b = pop();
      push(a * b);
    }
    else push(atoi(h));
  }
  printf("%d\n",pop());
  return 0;
}

int pop(){
  return s[top--];
}

void push(int x){
  s[++top]=x;
}


*/

