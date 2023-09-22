#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 90000
#define LOOP 50000

typedef struct{
	int data[N]; /* N個の要素を持つ配列 */
	int max;     /* データの最大値 */
	int min;     /* データの最小値 */
	double ave;  /* データの平均値 */
}My_Array;


void FindMember1(My_Array *);

My_Array FindMember2(My_Array);

int main() {
    clock_t t;
    int i;
    My_Array A;
    time_t Start, End;
    double keikat[2];
    t=clock();
    

    srand((unsigned int)time(NULL));
    for(i=0;i<N;i++){
        A.data[i]=rand()%1000;
    }

    Start=clock();
    for(i=0;i<LOOP;i++){
        FindMember1( &A);
    }
    
    End=clock();
    keikat[0]=(End-Start)/(double)CLOCKS_PER_SEC;
    
    printf("Findmember1\nMaximum value:%d\nMinimum value:%d\nAverage value:%f\n\n",A.max,A.min,A.ave);
    //printf("%s",End);
t=clock()-t;
printf("%f",t);
    Start=clock();
    for(i=0;i<LOOP;i++){
        A = FindMember2(A);
    }
    
    End=clock();
    
    keikat[1]= (End-Start)/(double)CLOCKS_PER_SEC;
    
    printf("Findmember2\nMaximum value:%d\nMinimum value:%d\nAverage value:%f\n",A.max,A.min,A.ave);

    
    printf("---time---\nFindmember1:%fsec\nFindmember2:%fsec\n",keikat[0],keikat[1]);

    return 0;
    
}

void FindMember1(My_Array *A) {
    int i;
    int sum=0;
    A->min=A->data[0];
    A->max=0;

    for(i=0;i<N;i++) {
        
        if(A->data[i]>A->max){
            A->max=A->data[i];
            sum+=A->data[i];
        }
        
        else if(A->data[i] < A->min){
            A->min=A->data[i];
            sum+=A->data[i];
        }
        
        else{
            sum+=A->data[i];
        }
    }

    A->ave=(double)sum/N;
}

My_Array FindMember2(My_Array A) {
    
    int i;
    int sum=0;
    A.min=A.data[0];
    A.max=0;

    for(i=0;i<N;i++) {
        if(A.data[i]>A.max){
            A.max=A.data[i];
            sum+=A.data[i];
            
        }
        else if(A.data[i]<A.min) {
            A.min=A.data[i];
            sum+=A.data[i];
        }
        
        else {
            sum+=A.data[i];
        }
    }
    A.ave=(double)sum/ N;
    
    return A;
}

