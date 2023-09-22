// Online C compiler to run C program online
#include <stdio.h>
void sorter(int cnt,int nums[]){
    int i,v,j;
    for(i=1;i<=cnt-1;i++){
        v=nums[i];
        j=i-1;
        while(j>=0&&nums[j]>v){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=v;
        printer(cnt,nums);
    }
}
void printer(int cnt,int nums[]){
    int i;
    for(i=0;i<cnt-1;i++){
       printf("%d ",nums[i]);
    }
     printf("%d",nums[cnt-1]);

printf("\n");
}

int main() {
    int cnt, i, nums[100];
    scanf("%d",&cnt);
    for(i=0;i<cnt;i++){
        scanf("%d",&nums[i]);
    }
    printer(cnt,nums);
    sorter(cnt,nums);

    return 0;
}


