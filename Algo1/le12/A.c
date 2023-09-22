
#include <stdio.h>
static const int MAX = 100000;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
int n, M[10000][10000];

int prim(){
    int u, minv;
    int d[MAX], p[MAX], color[MAX],q[MAX][MAX];
    
    for ( int i =0; i < n; i++ ) {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
        
    }
    
    d[0]=0;
    
    while ( 1 ) {
        minv = INFTY;
        u = -1;
        for ( int i =0; i < n; i++ ) {
            if ( minv > d[i] && color[i] != BLACK ) {
                u = i;
                minv = d[i];
            }
        }
        
        
        if ( u == -1 ) break;
        color[u] = BLACK;
        for ( int v = 0; v < n; v++ ) {
            if ( color[v] != BLACK && M[u][v] != INFTY ) {
                if(d[v]>M[u][v]) {
                    d[v]=M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    
    int sum = 0;
    
    for ( int i= 0; i < n; i++ ) {
        if ( p[i] != -1 ) sum += M[i][p[i]];
    }
    return sum;
}
int main() {
    scanf("%d",&n);
    int max = 3000000000;
    int q[max][max];
    
    
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            int e;
            scanf("%d",&e);
            M[i][j] = (e == -1) ? INFTY : e;
        }
    }
    printf("%d\n",prim());
    
    return 0;
}




