#include <stdio.h>
#include <stdlib.h>
int fibonacci_array(int,int*);
int main(){
    int num,far,*array,i;
    printf("n = ");
    scanf("%d",&num);
    
    array=(int*)malloc((num+1)*sizeof(int));
    
    for(i=0;i<(num+1);i++){
        array[i]=0;
    }
    far=fibonacci_array(num,array);

    printf("fibonacci(%d) = %d",num,far);
    free(array);
    return 0;
}

int fibonacci_array(int num,int *fs){
    static int cnt=0,sv[50];
    printf("called %d times: n=%d\n",cnt+1,num);
    cnt++;
    if(sv[num]!=0)return sv[num];
    else{
     if(num==0 || num==1){
         fs[num]=1;
         return fs[num];
     }else{
    fs[num]=(fibonacci_array(num-1,&fs[num-1])+fibonacci_array(num-2,&fs[num-2]));
    sv[num]=fs[num];
    }
    return fs[num];
    }
}


