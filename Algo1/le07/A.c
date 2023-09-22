
// Online C compiler to run C program online
#include <stdio.h>
#define Max 100005
#define NIL -1

int parents[Max],left[Max],right[Max],depth[Max],n;
int parents1[Max],left1[Max],right1[Max],depth1[Max];


int setDepth(int u, int p){
depth[u]=p;
if(right[u]!=NIL) setDepth(right[u],p);
if(left[u]!=NIL) setDepth(left[u],p+1);
}

void alotalotalotprinter(int i){
    int j,c,p;
    //for(i=0;i<n;i++){
        for(p=0;p<500;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
    printf("node %d: ",i);
    printf("parent = %d, ",parents[i]);
    printf("depth = %d, ",depth[i]);
    
    if(parents[i]==NIL) printf("root, ");
    else if(left[i]==NIL) printf("leaf, ");
    else printf("internal node, ");
    
    
    printf("[");
    for(j=0,c=left[i];c!=NIL;j++,c=right[c]){
        if(j) printf(", ");
        printf("%d",c);
    }
    printf("]\n");
    //}
}




int main() {
    int  i, j, k, d, v, c, l, r;
    // Write C code here
    scanf("%d",&n);
    for(i=0;i<n;i++){
        parents[i]=left[i]=right[i]=NIL;
    }
    
    for(i=0;i<n;i++){
        scanf("%d",&v);
        scanf("%d",&d);
        //cin>>v>>d;
        for(j=0;j<d;j++){
            scanf("%d",&c);
            if(j==0){
                left[v]=c;
            }else right[l]=c;
            l=c;
            parents[c]=v;
            }
        
    }
    
    for(i=0;i<n;i++){
        if(parents[i]==NIL) r=i;
    }
    
    setDepth(r,0);
   for(i=0;i<n;i++) alotalotalotprinter(i);
   // printf("Hello");
    
    return 0;
}


