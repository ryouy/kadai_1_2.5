#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TATE 5

int main()
{
  int i,length;
  char *arr[TATE],yoko[100];
  for(i = 0; i < TATE; i++){
  printf("Input word #%d: ",i+1);
  scanf("%s",yoko);
  length=strlen(yoko);
  arr[i]=malloc(sizeof(char) *strlen(yoko));
  strcpy(arr[i],yoko);
  }
  
  
for(i = 0; i < TATE; i++){
    printf("Word #%d (Length: %d): %s\n", i+1, strlen(arr[i]), arr[i]);
  }
  return 0;
}

