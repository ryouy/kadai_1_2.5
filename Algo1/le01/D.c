
// Online C compiler to run C program online
#include <stdio.h>
int tellme(int prc[],int num){
    int i,j,max=prc[1]-prc[0];
    int min=prc[0];
    for(i=1;i<num;i++){
            if(max<prc[i]-min)max=prc[i]-min;
            if(min>prc[i])min=prc[i];
    }
    return max;
}

int main() {
    int i,num,prc[200000],prof;
    // Write C code here
    
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&prc[i]);
    }
    
    
    printf("%d\n",tellme(prc,num));

    return 0;
}

