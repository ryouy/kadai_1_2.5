#include <stdio.h>
#define Row 3
#define COLUMN 4

int main(void){
	int mat[row][COLUMN]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int a,b,c;
	
	printf("行要素と列要素のどちらを表示したいか選択して下さい\n");
	printf("(行要素:0, 列要素:1) ");
	scanf("%d",&a);
	
	switch(a){
		case 0:
			printf("表示したい行番号を入力して下さい :");
        		scanf("%d",&b);
			for(int i=0;i<COLUMN;i++){
				printf("%d ",mat[b][i]);
			}
			printf("\n");
			break;
		case 1:
			printf("表示したい列番号を入力して下さい :");
        		scanf("%d",&b);
			for(int i=0;i<row;i++){
				printf("%2d\n",mat[i][b]);
			}
			break;
		default:
		
			for(int i=0;i<Row;i++){
				for(int j=0;j<COLUMN;j++){
					printf("%2d ",mat[i][j]);
				}
				
				
				printf("\n");
			}
			break;
	}
}

