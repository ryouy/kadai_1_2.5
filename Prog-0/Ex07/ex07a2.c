#include <stdio.h>

int main() {
    int array[11];
    int i;
    array[0] = 0;
    for(i=1; i<=10; i++){
  array[i] = 2*array[i-1]+1;
  
    }
    
     for(i=0; i<=10; i++){
         
         printf("%d: %d\n",i, array[i]);
        
     }
    return 0;
}

