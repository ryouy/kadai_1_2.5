
#include <stdio.h>
int nums[6]={1,1,1,1,1,1};

int main() {
    int cnt;
    scanf("%d",& cnt);
    
    if(cnt){
    for(int i=2;i<cnt+1;i++) nums[i]=nums[i-2]+nums[i-1];
    printf("%d\n",nums[cnt]);
    }else printf("1\n");
    
    return 0;
}








