int main(){
  int i,x;
  n=9;
  for(i=0;i<n;i++)scanf("%d",&H[i]);
  for(i=430;;i++){
    if(sac(0,i)==0){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}

int sac(int i,int x){
  if(x==0)return 1;
  if(i>=n)return 0;
  if(sac(i+1,x)==1||sac(i+1,x-H[i])==1)return 1;
}

