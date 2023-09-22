#include <stdio.h>

int main() {
    
    int i,n,premax,premin;
    int nums[8];
    
    printf("8個の整数を空白で区切って入力してください\n");
    for(i=0; i<=7; i++){
    scanf("%d",&n);
     nums[i] = n;
    }
    premax=nums[0];
    premin=nums[0];
    
    for(i=0; i<=7; i++){
     
     if (nums[i]>premax){
        premax = nums[i];
     }
     
     if (nums[i]<premin){
        premin = nums[i];
     }
    }
    printf("最大値は%dです\n",premax);
    printf("最小値は%dです\n",premin);
    printf("入力された整数の表示\n");
    for(i=0; i<=7; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    
    
    return 0;
}


