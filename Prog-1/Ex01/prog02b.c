// Online C compiler to run C program online
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define OTHER 2
int isAlpha(char);
int isUpper(char);

int main() {
    char c;
    printf("Input a character:");
    
    while(1){
    scanf("%c",&c) ;
    if(c=='\n') break;
    
    if (isAlpha(c)==TRUE){
        printf("ASCII code of '%c' is %d(0x%x).",c,c,c);
        printf("It's an upper-case character.\n");
    }else if(isAlpha(c)==FALSE){
        printf("ASCII code of '%c' is %d(0x%x).",c,c,c);
        printf("It's a lower-case character.\n");
    }else{
        printf("ASCII code of '%c' is %d(0x%x).",c,c,c);
        printf("It's an non-alphabetic character.\n");
    }
    
}
    return 0;
}
int isAlpha(char x){
    if(65<=x&&x<=90){
        return TRUE;
    }else if(97<=x&&x<=122){
        return FALSE;
    }else{
        return 2;
    }
}



