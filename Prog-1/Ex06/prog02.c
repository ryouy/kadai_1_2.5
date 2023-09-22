
#include <stdio.h>
#include <stdlib.h>
#define Max 100

char S2G(int);

int main(int argc, char *argv[]) {
    int i, scores[Max];
    char Result;
    //printf("Hi");
    for(i=1;i<argc;i++){
        scores[i]=atoi(argv[i]);
        Result=S2G(scores[i]);
        printf("Score:%3s Grade:%c\n",argv[i],Result);
    }

    return 0;
}
char S2G(int x){
    char grade;
    if(x<35)grade='F';
    else if(x>=35&&x<50)grade='D';
    else if(x>=50&&x<65)grade='C';
    else if(x>=65&&x<80)grade='B';
    else grade ='A';
    return grade;
    
}

