#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 90000

typedef struct{
	int data[N]; /* N個の要素を持つ配列 */
	int max;     /* データの最大値 */
	int min;     /* データの最小値 */
	double ave;  /* データの平均値 */
}My_Array;


void FindMember1(My_Array *);

int main() {
    int i;
    My_Array A;

    srand((unsigned int)time(NULL));
    for(i=0;i<N;i++) {
        A.data[i]=rand()%1000;
    }
    FindMember1( &A);

    printf("Findmember1\nMaximum value:%d\nMinimum value:%d\nAverage value:%f\n",A.max,A.min,A.ave);
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

    printf("main\nMaximum value:%d\nMinimum value:%d\nAverage value:%f\n",A->max,A->min,A->ave);
}

