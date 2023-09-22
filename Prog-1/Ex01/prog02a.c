// Online C compiler to run C program online
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int isAlpha(char);

int main() {
    char c;
    printf("Input a character:");
    
    while(1){
    scanf("%c",&c) ;
    if(c=='\n') break;
    
    if (isAlpha(c)==TRUE){
        printf("ASCII code of '%c' is %d(0x%x).",c,c,c);
        printf("It's an alphabetic character.\n");
    }else{
        printf("ASCII code of '%c' is %d(0x%x).",c,c,c);
        printf("It's an non-alphabetic character.\n");
    }
    
}
    return 0;
}
int isAlpha(char x){
    if((65<=x&&x<=90)||(97<=x&&x<=122)){
        return TRUE;
    }else{
        return FALSE;
    }
}


