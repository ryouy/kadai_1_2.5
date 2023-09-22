#include<stdio.h>
#define subject 9
#define student 20
int main()
{
  int dat[subject][student];
  int x,y,i,j;
  int sum;

    scanf("%d%d",&x,&y);
  printf("科目数:%d, 学生数:%d\n",x,y);
  for(i=0;i<y;i++){
      sum=0;
      for(j=0;j<x;j++){
          scanf("%d",&dat[i][j]);
	  sum+=dat[i][j];
	  if (j==x-1) {printf("%d  : %3.1f\n",dat[i][j],(double)sum/x);
	      
	  }else {
	      printf("%d   ",dat[i][j]);
	      
	  }
      }
    }
  for(j=0;j<x;j++)
    {
      sum=0;
    for(i=0;i<y;i++) {
        sum+=dat[i][j];
        
    }
   	printf("%3.1f ",(double)sum/y); 
        
    }
  printf("\n");
      
  return 0;
}
  
  
    
