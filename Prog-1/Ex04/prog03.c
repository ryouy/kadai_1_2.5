#include <stdio.h>
#define N 255 
char Chgw(char);

int main(){
    int i,cnt;
	char ss[N];
	char str[N], str_new[N];

	printf("Input : ");
	while(scanf("%s", str)=='\0'){
	    scanf("%s", str);
	}
	for(cnt=0;cnt<N;cnt++){
	    if(str[cnt]=='\0') break;
	    ss[cnt]=str[cnt];
	}
	for(i=0;i<cnt;i++){
        str_new[i+1]=Chgw(str[i]);
    }
	
    str_new[0]='(';
    //str_new[cnt+1,cnt+2]=[')','\0'];
    str_new[cnt+1]=')';
    str_new[cnt+2]='\0';
    
	printf("Before : %s\n", str);
	printf("After  : %s\n", str_new);
	
	return 0;
}

char Chgw(char x){
     if(x>='0' && x<='9') return x;
     else if(x>='A'&&x<='Z') return x;
     else if(x>='a'&&x<='z') return x;
     else return '_';
}

