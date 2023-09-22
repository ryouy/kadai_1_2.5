#include <stdio.h>

int main() {
    int array[15] = {1, 7, 10, 18, 27, 31, 42, 49, 54, 50, 61, 67, 72, 88, 93};
    int a, b, c;
    printf("添え字を入力してください:");
    scanf("%d",&a);
    if(a>=0 && a<=15){
    printf("array[%d]=%d\n",a, array[a]);
    if(array[a]%3==0)
{
printf("3の倍数です\n");
}else{
    printf("3の倍数ではありません\n");
}
    }else{
        printf("範囲外です\n");
    }
    
    
    
     
    return 0;
}


