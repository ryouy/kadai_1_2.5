
// Online C compiler to run C program online
#include <stdio.h>

struct trmp{
    char num;
    char alph;
};

/*void bubblesorter(int cnt, trmp trmp1[]){
   int i,j,minj,cntsort=0;
   struct trmp stc;
    for(i=0;i<=cnt-1;i++){
        for(j=cnt-1;j>i;j--){
            if(trmp1[j].num<trmp1[j-1].num){
               stc=trmp1[i];
	    trmp1[i]=trmp1[minj];
		trmp1[minj]=stc;
            }
        }
        
    
    }
    
	for(i=0;i<cnt-1;i++){
		printf("%c%c ",trmp1[i].alph,trmp1[i].num);
	}
	printf("%c%c\n",trmp1[cnt-1]);
	printf("stable\n");
    
}
*/
/*
void selectsorter(int cnt, trmp trmp2[]){
   int i,j,minj,cntsort=0;
   struct trmp stc;
    for(i=0;i<=cnt-1;i++){
        minj=i;
        for(j=i;j<=cnt-1;j++){
            if(trmp2[j].num<trmp2[minj].num){
                minj=j;
            }
        }
        stc=trmp2[i];
	    trmp2[i]=trmp2[minj];
		trmp2[minj]=stc;
		//if(minj!=i) cntsort++;
    
    }
    
	for(i=0;i<cnt-1;i++){
		printf("%c%c ",trmp2[i].alph,trmp2[i].num);
	}
	printf("%c%c\n",trmp2[cnt-1]);
    
}
*/

void printer(int cnt,int nums[]){
    int i;
    for(i=0;i<cnt-1;i++){
       printf("%d ",nums[i]);
    }
     printf("%d",nums[cnt-1]);

printf("\n");
}

int main() {
    int cnt, i;
    struct trmp trmp1[10000],trmp2[10000];
    char emp;
    scanf("%d%c",&cnt,&emp);
    
    for(i=0;i<cnt;i++){
        scanf("%c%c%c",&trmp1[i].alph,&trmp1[i].num,&emp);
        trmp2[i]=trmp1[i];
       // printf("%c%c",trmp1[i].alph,trmp1[i].num);
    }
    
    
    //int i,j,minj,cntsort=0;
   struct trmp stc;
   int minj,j;
    for(i=0;i<=cnt-1;i++){
        for(j=cnt-1;j>i;j--){
            if(trmp1[j].num<trmp1[j-1].num){
        stc=trmp1[j];
	    trmp1[j]=trmp1[j-1];
		trmp1[j-1]=stc;
            }
        }
        
    
    }
    
	for(i=0;i<cnt-1;i++){
		printf("%c%c ",trmp1[i].alph,trmp1[i].num);
	}
	printf("%c%c\n",trmp1[cnt-1].alph,trmp1[cnt-1].num);
	printf("Stable\n");
    
    //bubblesorter(cnt,trmp1);
    //selectsorter(cnt,trmp1);
   // struct trmp stc;
   int stable=1;
    for(i=0;i<=cnt-1;i++){
        minj=i;
        for(j=i;j<=cnt-1;j++){
            if(trmp2[j].num<trmp2[minj].num){
                minj=j;
            }
        }
        stc=trmp2[i];
	    trmp2[i]=trmp2[minj];
		trmp2[minj]=stc;
		//if(minj!=i) cntsort++;
    
    }
    
	for(i=0;i<cnt-1;i++){
		printf("%c%c ",trmp2[i].alph,trmp2[i].num);
		
	}
	printf("%c%c\n",trmp2[cnt-1].alph,trmp2[cnt-1].num);
    for(i=0;i<cnt-1;i++){
        //stable=1
        if(trmp1[i].num!=trmp2[i].num||trmp1[i].alph!=trmp2[i].alph)  stable=0;
    }
if(stable==0)printf("Not stable\n");
else printf("Stable\n");

    return 0;
}






