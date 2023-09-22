#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 200 
int main(){

  char code_file[] = "country-code.txt"; 
  FILE *fp;

  char typein[N]; 
  char pickup[N]; 
  int status; 
  int i=0,j=0,cnt=0;

  while(1){
    printf("Input a code: ");
    if(scanf("%s", typein) == EOF) 
     break;

      if((fp = fopen(code_file, "r")) == NULL){
         printf("Failed to open: %s\n", code_file);
         exit(2);
      }

      while(1){
      if(fscanf(fp,"%s",pickup) != 1) break;
      if(strcmp(pickup,typein) == 0){
        printf("The code \"%s\" is found.\n",typein);
         cnt++;
         break;
     }
    }
                
      if (cnt == 0){
        printf("The code \"%s\" is not found.\n",typein);
        }
        cnt = 0;
        fclose(fp);
        }

        printf("\n");
        return 0;

}

