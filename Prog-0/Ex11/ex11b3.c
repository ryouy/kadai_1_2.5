#include <stdio.h>

int Gojo(int,int);
int a, b,c=0;

int main() {
    printf("Input two numbers ");
    scanf("%d%d",&a, &b);
    if(a>0&&b>0){
    printf("GCD of %d and %d is %d.\n",a,b,Gojo(a,b));
  return 0;
}else if(a<0||b<0){
    printf("Input positive numbers again!\n");
}
}



int Gojo(int a,int b){
    while(1){
        c=a%b;
        if(c==0){
            break;
        }
        a=b;
        b=c;
        
        
    }
    return b;
}



