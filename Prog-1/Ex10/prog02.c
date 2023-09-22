#include<stdio.h>
#include<stdlib.h>

int myatoi(char *);
int main(){
    
  int ival=0;
  char str[5];

 printf("和暦（H30, R4等）: ");
 scanf("%s",str);

 if(str[0]!='R'&&str[0]!='H'&&str[0]!='S'&&str[0]!='T'&&str[0]!='M'){
   printf("元号の文字が変です\n");
   exit(1);
 }

 if(str[1]<'0'||str[1]>'9'){
   printf("数字を読み取れません\n");
   exit(2);
 }else{
   ival=ival*10;
   ival=ival+myatoi(&str[1]);
 }

 if(str[0]=='R')ival=ival+2018;
 if(str[0]=='H')ival=ival+1988;
 if(str[0]=='S')ival=ival+1925;
 if(str[0]=='T')ival=ival+1911;
 if(str[0]=='M')ival=ival+1867;

 printf("西暦 (A.D.): %d\n",ival);
  return 0;
  
}

int myatoi(char *str)
{
  char* moji=str;
  int i=-1,ival=0,minus=0;

  for(i=0 ; i<11 ; i++){
    if(moji[i]=='\0') break;
    ival=ival*10;

    if(moji[i]=='0') ival=ival+0;
    else if(moji[i]=='1') ival=ival+1;
    else if(moji[i]=='2') ival=ival+2;
    else if(moji[i]=='3') ival=ival+3;
    else if(moji[i]=='4') ival=ival+4;
    else if(moji[i]=='5') ival=ival+5;
    else if(moji[i]=='6') ival=ival+6;
    else if(moji[i]=='7') ival=ival+7;
    else if(moji[i]=='8') ival=ival+8;
    else if(moji[i]=='9') ival=ival+9;
    else if(moji[i]=='-'){
      minus=1;

      continue;}
    else if(moji[i]=='+') continue;
    else {
      if(moji[i]==' ') continue;
      else{
        ival=ival/10;
      } break;
    }
  }
  if(moji[0]=='+' && moji[1]=='-') ival=0;
  if(minus==1) ival=ival*(-1);

  return ival;
}


