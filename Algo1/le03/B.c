
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#define length 100005

typedef struct list{
    char label[100];
    int num;
} lists;

lists list[length];
int head, tail, n;

void enqueue(lists x){
    list[tail]=x;
    tail=(tail+1)%length;
}

lists dequeue(){
    lists x= list[head];
    head=(head+1)%length;
    return x;
}

int whichmin(int a,int b){
    return a<b? a:b;
}
int main() {
    
    int elaps=0,c,i,q;
    lists u;
    
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%s",list[i].label);
        scanf("%d",&list[i].num);
    }
    head=1;
    tail=n+1;
    
    while(head!=tail){
        u=dequeue();
        c=whichmin(q,u.num);
        u.num-=c;
        elaps+=c;
        if(u.num>0)enqueue(u);
        else printf("%s %d\n",u.label,elaps);
    }
    
    // Write C code here
    //printf("Hello world");

    return 0;
}


