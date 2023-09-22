#include <stdio.h>
#include <stdlib.h>

#include <limits.h>

int main() {
    
    FILE *fpin, *fpout;
    int i, n;
    int Max=0, Min=INT_MAX;
    char m='m', a='a', x='x', I='i', N='n';
      
    if((fpin = fopen("input2.txt", "r")) == NULL){
        printf("Failed to open: input2.txt\n");
        exit(1);
    }


    if((fpout = fopen("result2.txt", "w")) == NULL){
        printf("Failed to open: result2.txt\n");
        fclose(fpin);
        exit(2);
    }

    while(fscanf(fpin,"%d",&n)!=EOF){
      if(n<Min){
          Min = n;
      } 
      if(n>Max){
          Max =n;
      }
    }

    fprintf(fpout,"max = %d,min = %d", Max, Min);

    fclose(fpin);
    fclose(fpout);
    
    return 0;
}

