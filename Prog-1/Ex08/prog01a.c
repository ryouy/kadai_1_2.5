
#include <stdio.h>

typedef struct{
	int id;           /* ID */
	char name[10];    /* 名前 */
	int grade;        /* 学年 */
	char subject[10]; /* 科目名 */
	char record;      /* 成績 */
}StudentInfo;

void PrintInfo1(StudentInfo);
void PrintInfo2(StudentInfo *);


int main() {
    
    StudentInfo student1 = 
    {
    1300041,
    "Ryo",
    1,
    "English",
    'C'
    };
    
    StudentInfo student2 = 
    {
    1300042,
    "Aizu",
    1,
    "Math",
    'B'
    };
    
    StudentInfo *p;
    printf("構造体の値渡し\n");
    PrintInfo1(student1);
    PrintInfo1(student2);
     printf("構造体のアドレス値渡し\n");
    PrintInfo2(&student1);
    PrintInfo2(&student2);
    
    return 0;
}

void PrintInfo1(StudentInfo Student1){
    
    printf("%d  %s %d  %s %c\n",Student1.id,Student1.name,Student1.grade,Student1.subject,Student1.record);
    
}
void PrintInfo2(StudentInfo *p){
   
    printf("%d  %s %d  %s %c\n",p->id,p->name,p->grade,p->subject,p->record);
   

}

