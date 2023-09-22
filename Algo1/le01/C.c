
#include <stdio.h>
int cnt=0;
countprime(int N){
    int j,ans;
    double flag=1;
    for(j=2;j*j<=N;j++){
    flag*=N%j;
    //flag = 0 or other int num like 0 or 12
    flag=flag/(flag-0.1);
    ans=(int)(flag);
    }
    if(ans==1)cnt++;
    //cnt+=ans;
    }



int main() {
    int num,N,i;
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
    scanf("%d",&N);
    
    countprime(N);
    }
    
    printf("%d\n",cnt);
    return 0;
}



