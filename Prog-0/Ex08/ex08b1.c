#include <stdio.h>

int main() {
    int tsuru, kame, tent, ashi_total;
    int tsurukametent = 20;
    int nohitcount = 0;
    
  printf("Input ashi (total):");
  
  scanf("%d",&ashi_total);
  
    if (ashi_total%2==0 && ashi_total<=120 && ashi_total>=40 && ashi_total>0){
    for(tsuru=0; tsuru<=tsurukametent; tsuru++){
        
        for(kame=0; kame<=tsurukametent-tsuru; kame++){
            tent=tsurukametent-tsuru-kame;
            
            if(tsuru*2+kame*4+tent*6==ashi_total){
                
                printf("Tsuru:%d(%d)  Kame:%d(%d)  Tentoumushi:%d(%d) %d\n",tsuru, tsuru*2, kame, kame*4, tent, tent*6, ashi_total);
            }
            else{
                nohitcount++;
                
                
                
            }
            
        }
    }
    }else{
        printf("NOT found!\n");
    }
    if(nohitcount==441){
    printf("NOT found!\n");
                }

    return 0;
}
