#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * MAXDATA:最大データ数
 * LENIP  :IPアドレスの最長文字数+1
 * LENHOST:最長文字数+1
 */
#define MAXDATA 1024
#define LENIP   16
#define LENHOST 256

int main(){
  int i;
  int count,check=0;
  int ndata;
  FILE *fp;
  char ip[MAXDATA][LENIP];
  char hostname[MAXDATA][LENHOST];
  char query[LENHOST];
  /* その他必要な変数を定義して良い */

  /*** データの読み出し処理 ***/
  /* ファイルのオープン */
  fp = fopen("hostlist.txt","r");
  
  if (fp == NULL) {
    printf("Cannot open file!\n");
    exit(1);
  }
  /* データの読み出し */
  for( i=0; i<MAXDATA; i++ ){
    /* ２項目読めなければループを抜ける */
    if (fscanf( fp, "%s %s",ip[i], hostname[i] ) != 2) break;
  }
  ndata=i;
  fclose(fp);

  /*** 問合せの処理 ***/
  while(1){
    if(scanf("%s",query)==EOF){
      check=-1;
      break;
    }
    for(count=0;count<ndata;count++){
      if(strcmp(hostname[count],query)==0){
        printf("%s : %s\n",query,ip[count]);
        check=1;
      }
    }
    if(check==0){
      printf("%s : not found!\n",query);
    }
    check=0;
  }

  return 0;
}

