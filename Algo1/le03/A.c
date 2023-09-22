

// Online C compiler to run C program online
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int TOP, S[30000];

void push(int x){
        TOP++;
        
        S[TOP]=x;
    }

int pop(){
    TOP--;
    
    return S[TOP+1];
}
int main() {
    int a,b,top=0;
    char s[30000];
    
    while(scanf("%s",s)!=EOF){
        if(s[0]=='+'){
            a=pop();
            b=pop();
            push(a+b);
            
        }else if(s[0]=='-'){
            a=pop();
            b=pop();
            push(b-a);
        }else if(s[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);
        }else {
            push(atoi(s));
        }
    }
    
    printf("%d\n",pop());
    
    
    
    // Write C code here
    //printf("Hello world");

    return 0;
}

