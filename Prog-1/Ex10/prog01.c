#include <stdio.h>
 
int myatoi(char *);
 
int main()
{
  char str2[][20]={ "  2022",
                    " -60.50",
                    "+32m",
                    " 999,654",
                    "+-24",
                    "x86",
                    "2022/11/30",
                    ""};
  int ival, i;
 
  for ( i=0; str2[i][0]!='\0'; i++ ){
    ival = myatoi( str2[i] );
    printf("string:%s\n", str2[i]);
    printf("value:%d\n", ival);
  }
  return 0;
}
/* この後に関数 myatoi を作成する */
int myatoi(char *str)
{
    char* str3=str;
    int i;
    int ival=0;
    int mainapoint=0;

    for(i=0;i<11;i++){
        
        if(str3[i]==NULL) break;
        ival=ival*10;
        
        if(str3[i]=='0') ival=ival+0;
        else if(str3[i]=='1') ival=ival+1;
        else if(str3[i]=='2') ival=ival+2;
        else if(str3[i]=='3') ival=ival+3;
        else if(str3[i]=='4') ival=ival+4;
        else if(str3[i]=='5') ival=ival+5;
        else if(str3[i]=='6') ival=ival+6;
        else if(str3[i]=='7') ival=ival+7;
        else if(str3[i]=='8') ival=ival+8;
        else if(str3[i]=='9') ival=ival+9;
        else if(str3[i]=='-'){
            mainapoint=1;
            continue;}
        else if(str3[i]=='+') continue;
        else {
            if(str3[i]==' ') continue;
            else{
            ival=ival/10;
        } break;
      }
    }
    
    
    if(str3[0]=='+'&& str3[1]=='-') ival=0;
    if(str3[0]=='-'&& str3[1]=='+') ival=0;
    
    if(mainapoint==1)ival=ival*(-1);
    
    
    
    return ival;
}

