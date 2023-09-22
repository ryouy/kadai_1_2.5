#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int i,n,max=0,min=INT_MAX;
    char m='m',a='a',x='x',I='i',N='n';
      FILE *fpin, *fpout;

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
      if(n>max) max=n;
      if(n<min) min=n;
    }

    fprintf(fpout,"max = %d,min = %d",max,min);

    fclose(fpout);
    fclose(fpin);
    
    return 0;
}


