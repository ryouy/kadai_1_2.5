
// Online C compiler to run C program online
#include <stdio.h>
static const int N=100;
int min(int x,int y){
    if (x < y)
        return (x);
    else
        return (y);
}
    

int main() {
    int n, p[N + 1], m[N + 1][N + 1],q[N];
   scanf("%d",&n);
for ( int i = 1; i <= n; i++ ){
scanf("%d",&p[i - 1]);
scanf("%d",&p[i]);
}
for ( int i = 1; i <= n; i++ ) m[i][i] = 0;
for ( int l = 2; l <= n; l++ ){
for ( int i= 1; i <=n - l + 1; i++ ){
    for(int g=0;g<N;g++) for(int g=0;g<N;g++) q[g]++;
int j = i + l - 1;
m[i][j]=(1 <<21);
for ( int k = i; k <= j- 1; k++ ){
    m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
}
}
}
printf("%d",m[1][n]);
printf("\n");

return 0;

    
}


