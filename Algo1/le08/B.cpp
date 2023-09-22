
// Online C compiler to run C program online
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
#define Max 3000000
int parents1[Max],left1[Max],right1[Max],depth1[Max];


struct Node {
int key;
Node *right, *left, *parent;
};

Node *root, *NIL;

Node * find(Node *u,int k){
    while(u!=NIL&&k!=u->key){
        if(k<u->key)u=u->left;
        else u=u->right;
    }
    return u;
}

void insert(int k){
Node *y = NIL;
Node *x = root;
Node *z;
for(int p=0;p<2000;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }

z = (Node *)malloc(sizeof(Node));
z->key = k;
z->left = NIL;
z->right = NIL;

while ( x != NIL ) {
y = x;
if ( z->key < x->key ) {
 x = x->left;
}else {
x = x->right;
}
}

z->parent = y;
if ( y == NIL ){
root = z;
}else {
if ( z->key < y->key ) {
y->left = z;
}else {
    y->right=z;
}
}
}

void inorder(Node *u) {
if ( u == NIL ) return;
inorder(u->left);
printf(" %d", u->key);
inorder(u->right);
for(int p=0;p<200;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
}


void preorder(Node *u) {
if ( u == NIL ) return;
printf(" %d", u->key);
preorder(u->left);
for(int p=0;p<200;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
preorder(u->right);
}

int main() {
    int  a=99;
    int A[a],B[a],C[a],D[a],E[a];
    for(int y=0;y<100;y++){
        A[y]++;
        B[y]++;
        C[y]++;
        D[y]++;
        E[y]++;
    }
    
    
int n, i, x;
string com;

scanf("%d", &n);

for ( i=0; i<n; i++ ) {
cin >> com;
if ( com[0] == 'f' ) {
scanf("%d", &x);
Node *t = find(root,x);
if(t!=NIL)printf("yes\n");
else printf("no\n");
} else if ( com == "insert" ) {
    scanf("%d",&x);
    insert(x);
    }else if ( com == "print" ) {
inorder (root);
printf("\n");
preorder(root);
printf("\n");
//printf("hey");
}
}
return 0;
}


