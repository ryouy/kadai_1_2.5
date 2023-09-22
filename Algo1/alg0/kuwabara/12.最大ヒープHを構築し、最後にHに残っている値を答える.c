以下を使う。

while H.size >1

a=H.extractMax()

b=H.extractMax()

H.insert((a+b)%1000000000)   ~

#include<stdio.h>
#define DUMMY -1
#define MAX 500001
int heap_size,S[MAX];

void HeapIncreaseKey(int key){
  int i = heap_size;
  S[i]=key;
  while(i>1 && S[i/2]<S[i]){
    int tmp = S[i];
    S[i]=S[i/2];
    S[i/2]=tmp;
    i /=2;
  }
  return;
}

void Insert(int key){
  heap_size++;
  S[heap_size]=DUMMY;
  HeapIncreaseKey(key);
  return ;
}

void MaxHeapify(int x){
  int l,r,largest;
  l = 2*x;
  r = 2*x+1;

  if(l<=heap_size && S[l] > S[x]){
    largest = l;
  }
  else largest = x;
  if(r<=heap_size && S[r] > S[largest]){
    largest = r;
  }
  if(largest!=x){
    int tmp = S[x];
    S[x]=S[largest];
    S[largest]= tmp;
    MaxHeapify(largest);
  }
  return ;
}

int ExtractMax(){
  int max = S[1];
  S[1]=S[heap_size];
  heap_size--;
  MaxHeapify(1);
  return max;
}

int main(){
  int key;
  while(scanf("%d",&key)!=EOF){
    Insert(key);
    }
    int a,b;
    while(heap_size>1){
      a=ExtractMax();
      b=ExtractMax();
      Insert((a+b)%1000000000);
    }
    printf("%d\n",S[1]);
  return 0;
}





