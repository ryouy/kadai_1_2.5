// Online C compiler to run C program online
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

//#include <unistd>
using namespace std;
#define Max 3000000
int parents1[Max],left1[Max],right1[Max],depth1[Max];

struct Node {
int key;
Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
Node *y = NIL;
Node *x = root;
Node *z;

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

void inorderinorderinorder(Node *u) {
if ( u == NIL ) return;
inorderinorderinorder(u->left);
printf(" %d", u->key);
for(int p=0;p<2000;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
inorderinorderinorder(u->right);
}

void preorder(Node *u) {
if ( u == NIL ) return;
printf(" %d", u->key);
preorder(u->left);
preorder(u->right);
for(int p=0;p<2000;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
}

int main() {
    int  a=999999;
    int A[a],B[a],C[a],D[a],E[a];
    
    
    
        
    for(int y=0;y<80000;y++){
        A[y]+=77799;
        B[y]+=C[y];
        C[y]*=109*109;
        D[y]*=109*109;
        E[y]*=109*109;
    }
    for(int p=0;p<200000;p++){
        parents1[p]=left1[p]=right1[p]=332;
    }
    
    
    
    
int n, i, x;
string com;

scanf("%d", &n);
//sleep(0.1);
for ( i=0; i<n; i++ ) {
cin >> com;
if ( com == "insert" ) {
scanf("%d", &x);
insert(x);
} else if ( com == "print" ) {
inorderinorderinorder (root);
printf("\n");
preorder(root);
printf("\n");
//printf("hey");
}
}
return 0;
}

