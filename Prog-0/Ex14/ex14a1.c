#include <stdio.h>
#include <stdlib.h>
#define MAX 20
void histgram (int);
int main() {
    int num,i;
    for(i=0; i<MAX; i++){
    scanf("%d",&num);
    if(num<0) break;
    histgram(num);
    }
    for(i=0; i<3; i++){
    
    return 0;
    }
}

void histgram (int n){
    int i;
    if(n>70){
        fprintf(stderr,"illegal value!\n");
        exit(4);
    }
    
    
    printf("[%d]:",n);
    for(i=0; i<n; i++){
        printf("#");
    }
    printf("\n");
    
}

