
// Online C compiler to run C program online
#include <stdio.h>

static const int N = 100;

int main() {
    int p[N];
int M[N][N];
int n, u, k, v;
scanf("%d",&n);
for ( int i=0; i <n; i++ ){
for ( int j=0; j <n; j++ ) M[i][j] = 0;
}
for( int i=0; i < n; i++ ){
scanf("%d",&u);
scanf("%d",&k);
u--;
for ( int j = 0; j < k; j++ ){
 
scanf("%d",&v);
v--;
M[u][v]=1;
}
}
for ( int i =0; i < n; i++ ){
for ( int j=0; j < n; j++ ){
    for ( int w = 0; w < 34; w++ ) p[w]++;
if ( j ) printf(" ");
printf("%d",M[i][j]);
}
printf("\n");
}
return 0;
}


