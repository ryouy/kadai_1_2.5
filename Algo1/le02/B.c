
// Online C compiler to run C program online
#include <stdio.h>
void sorter(int cnt,int nums[]){
   int i,j,minj,stc,cntsort=0;
    for(i=0;i<=cnt-1;i++){
        minj=i;
        for(j=i;j<=cnt-1;j++){
            if(nums[j]<nums[minj]){
                minj=j;
            }
        }
        stc=nums[i];
	    nums[i]=nums[minj];
		nums[minj]=stc;
		if(minj!=i) cntsort++;
    
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





