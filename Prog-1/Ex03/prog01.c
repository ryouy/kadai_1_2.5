#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char changelower(char);
char changeupper(char);
char changeboth(char);
 
int main() {
    int i,cnt=0;
    char c;
    char words[500];
    char words1[500];
    char words2[500];
    char words3[500];
    FILE *fpin, *fpout;

    fpin = fopen("input1.txt", "r");
    if(fpin == NULL){
        printf("Failed to open: input1.txt\n");
        exit(1);
    }
    fpout = fopen("output1-ans.txt", "w");
    if(fpout == NULL){
        printf("Failed to open: output1-ans.txt\n");
        fclose(fpin);
        exit(2);
    }
    
    for(i=0;i<500;i++){
        words[i]=fgetc(fpin);
        if(words[i]==EOF) break;
        words1[i]=changeupper(words[i]);
        words2[i]=changelower(words[i]);
        words3[i]=changeboth(words[i]);
        cnt++;
    }
    
    for(i=0;i<cnt;i++){
       fputc(words1[i],fpout);
       }
       fputc('\n',fpout);
       fputc('\n',fpout);
       
    for(i=0;i<cnt;i++){
       fputc(words2[i],fpout);
       }
       fputc('\n',fpout);
       fputc('\n',fpout);
    for(i=0;i<cnt;i++){
       fputc(words3[i],fpout);
       }
    
 
    fclose(fpout);
    fclose(fpin);
 
    
    return 0;
 
}

char changelower(char x){
    if(97<=x&&x<=122) return x-32;
    //if(65<=x&&x<=90) return x+32;
    else return x+0;
}
char changeupper(char x){
    //if(97<=x&&x<=122) return x-32;
    if(65<=x&&x<=90) return x+32;
    else return x+0;
}
char changeboth(char x){
    if(97<=x&&x<=122) return x-32;
    if(65<=x&&x<=90) return x+32;
    else return x+0;
}

