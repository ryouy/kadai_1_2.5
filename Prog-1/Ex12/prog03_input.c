#include<stdio.h>
#include<stdlib.h>
#include"prog03.h"
 
int input_planet(Planet *planet) {
  FILE *fp;
  int i;
  if((fp=fopen("planet.txt","r"))==NULL){
      return -1;
  }
  for(i=0;i<8;i++){
    if(fscanf(fp,"%s %lf %lf %lf",planet[i].name,&planet[i].radius,&planet[i].density,&planet[i].orbital_radius)==EOF){
        return -1;
    }
     }
  return 0;
}
