
// Online C compiler to run C program online
#include <stdio.h>
void sorter(int cnt,int nums[]){
   
    int flag=1,cntsort=0;
    int i=0,j,stc;
    while(flag){
        flag=0;
        for(j=cnt-1;j>=i+1;j--){
            if(nums[j]<nums[j-1]){
                stc=nums[j-1];
				nums[j-1]=nums[j];
				nums[j]=stc;
				cntsort++;
				flag=1;
            }
        }
        i++;
    }
    
	for(i=0;i<cnt-1;i++){
		printf("%d ",nums[i]);
	}
	printf("%d\n",nums[cnt-1]);
	printf("%d\n",cntsort);
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
    int cnt, i, nums[10000];
    scanf("%d",&cnt);
    
    for(i=0;i<cnt;i++){
        scanf("%d",&nums[i]);
    }
    //printf("hello");
    //printer(cnt,nums);
    sorter(cnt,nums);

    return 0;
}





