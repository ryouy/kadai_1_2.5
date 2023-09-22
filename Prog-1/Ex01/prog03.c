#include <stdio.h>
char scoreToGrade(int score);
int gradeToPoint(int score);

int main() {
    int score,credit,status;
    char grade;
    
    while(1){
    printf("評点と単位数を入力してください (Ctrl+Dで終了): ");
    status=scanf("%d%d",&score, &credit);
    if(status==EOF)break;
    printf("%d 点の評価は %c で，Grade Point (GP) は %d です． (%d単位)\n",score, scoreToGrade(score), gradeToPoint(score),credit);
}
    return 0;
}

char scoreToGrade(int score){
    if(0<=score&&score<=34){
        return 'F';
    }else if(35<=score&&score<=49){
        return 'D';
    }else if(50<=score&&score<=64){
        return 'C';
    }else if(65<=score&&score<=79){
        return 'B';
    }else if(80<=score&&score<=100){
        return 'A';
    }
}

int gradeToPoint(int score){
    if(0<=score&&score<=34){
        return 0;
    }else if(35<=score&&score<=49){
        return 0;
    }else if(50<=score&&score<=64){
        return 2;
    }else if(65<=score&&score<=79){
        return 3;
    }else if(80<=score&&score<=100){
        return 4;
    }
}



