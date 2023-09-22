
#include <stdio.h>
#define N 20

FILE *fp;

typedef struct{
	int id;           /* ID */
	char name[10];    /* 名前 */
	int grade;        /* 学年 */
	char subject[10]; /* 科目名 */
	char record;      /* 成績 */
}StudentInfo;

void PrintInfo1(StudentInfo);
void PrintInfo2(StudentInfo *);

int InputData(StudentInfo *);

int main() {
    int i,rst,cnt
    StudentInfo data[N];
    for(i=0;i<N;i++){
        rst=InputDAta(&data[i]);
        if(rst==EOF)break;
    }
    cnt=i;

    StudentInfo *p;
    printf("構造体の値渡し\n");
    PrintInfo1(data[0]);
    PrintInfo1(data[1]);
     printf("構造体のアドレス値渡し\n");
    PrintInfo2(&data[0]);
    PrintInfo2(&data[1]);
    
    return 0;
}



int InputData(StudentInfo *y){
    int datas;
    datas=scanf("%d%s%d %c",&(*z).id,(*z).name,&(*z).grade,&(*z).subject,&(*z).record)
    return datas;
}
void PrintInfo1(StudentInfo Student1){
    printf("%d  %s %d  %s %c\n",Student1.id,Student1.name,Student1.grade,Student1.subject,Student1.record);
}
void PrintInfo2(StudentInfo *p){
    printf("%d  %s %d  %s %c\n",p->id,p->name,p->grade,p->subject,p->record);
   
}

