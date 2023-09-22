#include <stdio.h>
int fibonacci(int);
int main() {
    int num,f;
    printf("n = ");
    scanf("%d",&num);
    f=fibonacci(num);
    printf("fibonacci(%d) = %d\n",num,f);
    
    
    return 0;
}
int fibonacci(int num){
    static int cnt=0;
    cnt++;
    printf("called %d times: n = %d\n",cnt,num);
    if(num==0||num==1)return 1;
    else if(num>=2)return fibonacci(num-1)+fibonacci(num-2);
}

