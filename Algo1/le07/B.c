
// Online C compiler to run C program online
#include <stdio.h>
#define Max 3000000
#define NIL -1

int parents[Max],left[Max],right[Max],depth[Max],height[Max],n;
int parents1[Max],left1[Max],right1[Max],depth1[Max];


void setDepth(int u, int p){
depth[u]=p;
if(right[u]!=NIL) setDepth(right[u],p+1);
if(left[u]!=NIL) setDepth(left[u],p+1);
}

int setHeight(int u){
    int h1=0,h2=0;
    if(left[u]!=NIL){
        h1=setHeight(left[u])+1;
    }
    if(right[u]!=NIL){
        h2=setHeight(right[u])+1;
    }
    return height[u]=(h1>h2?h1:h2);
}

int getSibling(int u){
    if(parents[u]==NIL) return NIL;
    if(left[parents[u]]!=u&&left[parents[u]]!=NIL) return left[parents[u]];
    if(right[parents[u]]!=u&&right[parents[u]]!=NIL) return right[parents[u]];
    return NIL;
    
}
void alotalotalotprinter(int i){
    int j,c,p;
    //for(i=0;i<n;i++){
        for(p=0;p<200000;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
    printf("node %d: ",i);
    printf("parent = %d, ",parents[i]);
    printf("sibling = %d, ",getSibling(i));
    
    int deg=0;
    
    if(left[i]!=NIL)deg++;
    if(right[i]!=NIL)deg++;
    
    printf("degree = %d, ",deg);
    printf("depth = %d, ",depth[i]);
    printf("height = %d, ",height[i]);
    
    if(parents[i]==NIL) printf("root\n");
    else if(left[i]==NIL&&right[i]==NIL) printf("leaf\n");
    else printf("internal node\n");
    
    
    
    //}
}




int main() {
    int  i, j, k, d, v, c, l, r,root=0;
    // Write C code here
    scanf("%d",&n);
    for(i=0;i<n;i++){
        parents[i]=NIL;
    }
    
    for(i=0;i<n;i++){
        scanf("%d",&v);
        scanf("%d",&l);
        scanf("%d",&r);
        //cin>>v>>d;
        left[v]=l;
        right[v]=r;
        if(l!=NIL)parents[l]=v;
        if(r!=NIL)parents[r]=v;
        
    }
    
    for(i=0;i<n;i++){
        if(parents[i]==NIL) root=i;
    }
    
    setDepth(root,0);
    setHeight(root);
   for(i=0;i<n;i++) alotalotalotprinter(i);
   // printf("Hello");
    
    return 0;
}


