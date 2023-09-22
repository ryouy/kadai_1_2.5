// Online C compiler to run C program online
#include <stdio.h>
#include "prog01.h"

int main() {

 Record data;

    // Write C code here
    printf("データを入力して下さい");
    printf("苗字 ->");
    scanf("%s",data.familyname);
    printf("名前 ->");
    scanf("%s",data.firstname);
    printf("生まれた年（西暦) ->");
    scanf("%d",&data.birthday[0]);
    printf("生まれた月 ->");
    scanf("%d",&data.birthday[1]);
    printf("生まれた日 ->");
    scanf("%d",&data.birthday[2]);
    
    printf("苗字: %s\n",data.familyname);
    printf("名前: %s\n",data.firstname);
    printf("生年月日: %d/%d/%d\n",data.birthday[0],data.birthday[1],data.birthday[2]);

    return 0;
}

