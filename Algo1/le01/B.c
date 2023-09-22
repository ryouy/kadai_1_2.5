
// Online C compiler to run C program online
#include <stdio.h>

caluc(int num1,int num2){
    int a,r;
    //num1>num2
    if (num1<num2) {
    a=num1;
    num1=num2;
    num2=a;
    }
    r = num1 % num2;
   
  while(r!=0){
    num1 = num2;
    num2 = r;
    r = num1 % num2;
  }
printf("%d\n",num2);
}

int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    caluc(num1,num2);
    //printf("%d",num2);

    return 0;
}

